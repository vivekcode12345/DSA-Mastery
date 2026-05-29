#!/bin/zsh
set -euo pipefail

if [[ $# -lt 1 ]]; then
  print -u2 "Usage: $0 <path-to-cpp-file>"
  exit 1
fi

# Join all args and clean weird quotes from VS Code
source_file="$*"
source_file="${source_file//\"/}"

if [[ ! -f "$source_file" ]]; then
  print -u2 "File not found: $source_file"
  exit 1
fi

source_dir="${source_file:h}"
source_name="${source_file:t}"
output_file="${source_file:t:r}"

build_dir="${source_dir}/.build"
output_path="${build_dir}/${output_file}"

mkdir -p "$build_dir"

cd "$source_dir"

/usr/bin/clang++ -std=c++17 "$source_name" -o "$output_path"

"$output_path"