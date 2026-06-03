#!/bin/zsh
set -euo pipefail

if [[ $# -lt 1 ]]; then
  # If no arg provided, try to use the single .cpp file in the current directory as a convenience.
  # This helps when the task's cwd is the file directory and the user runs the script manually.
  cpp_files=(*.cpp(N))
  if [[ "${#cpp_files[@]}" -eq 1 ]]; then
    source_file="${cpp_files[1]}"
  else
    print -u2 "Usage: $0 <path-to-cpp-file>"
    exit 1
  fi
fi

# Join all args (handles VS Code weird quoting) then clean surrounding/embedded quotes
source_file="$*"
# Remove literal double and smart quotes that sometimes appear when VS Code passes args
source_file="${source_file//\"/}"
source_file="${source_file//“/}"
source_file="${source_file//”/}"
source_file="${source_file//\'\'/}"
# Trim leading/trailing whitespace
source_file="$(echo "$source_file" | awk '{$1=$1;print}')"

# If realpath is available, canonicalize the path
if command -v realpath >/dev/null 2>&1; then
  real=$(realpath -- "$source_file" 2>/dev/null || true)
  if [[ -n "$real" && -f "$real" ]]; then
    source_file="$real"
  fi
fi

# If the provided path is malformed because the shell split on spaces / '&',
# fall back to the single C++ file in the current directory when there is only one.
if [[ ! -f "$source_file" ]]; then
  cpp_files=(*.cpp(N))
  if [[ "${#cpp_files[@]}" -eq 1 ]]; then
    source_file="${cpp_files[1]}"
    if command -v realpath >/dev/null 2>&1; then
      real=$(realpath -- "$source_file" 2>/dev/null || true)
      if [[ -n "$real" && -f "$real" ]]; then
        source_file="$real"
      fi
    fi
  fi
fi

# Print resolved source path for diagnostics (single-line)
print -u2 "run_cpp.sh: resolved source_file='$source_file'"

if [[ ! -f "$source_file" ]]; then
  print -u2 "File not found: $source_file"
  exit 1
fi

source_dir="${source_file:h}"
# Resolve source_dir to an absolute path to avoid relative-path issues
source_dir="$(cd "$source_dir" && pwd)"
source_name="${source_file:t}"
output_file="${source_file:t:r}"

build_dir="${source_dir}/.build"
output_path="${build_dir}/${output_file}"

mkdir -p "$build_dir"

cd "$source_dir"

# Choose a compiler: try several known locations and fall back to PATH lookups
candidate_compilers=(
  "/usr/bin/clang++"
  "/Library/Developer/CommandLineTools/usr/bin/clang++"
  "/Applications/Xcode.app/Contents/Developer/Toolchains/XcodeDefault.xctoolchain/usr/bin/clang++"
  "clang++"
  "g++"
)
compiler=""
for c in "${candidate_compilers[@]}"; do
  if [[ "$c" == /* ]]; then
    if [[ -x "$c" ]]; then
      compiler="$c"
      break
    fi
  else
    if command -v "$c" >/dev/null 2>&1; then
      compiler="$c"
      break
    fi
  fi
done

if [[ -z "$compiler" ]]; then
  print -u2 "No C++ compiler found (tried: ${candidate_compilers[*]})."
  print -u2 "PATH=$PATH"
  print -u2 "Available: $(command -v clang++ || true) $(command -v g++ || true)"
  exit 127
fi

"$compiler" -std=c++17 "$source_name" -o "$output_path"

"$output_path"