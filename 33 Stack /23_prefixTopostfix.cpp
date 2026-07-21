#include <iostream>
#include <stack>
using namespace std;

string solve(string val1, string val2, char oper) {
    string ans = "";
    ans.push_back('(');
    ans += val1;
    ans.push_back(oper);
    ans += val2;
    ans.push_back(')');
    return ans;
}

int main() {

    string s = "-/*+79483";   // Prefix

    stack<string> val;

    for (int i = s.length() - 1; i >= 0; i--) {

        if (s[i] >= '0' && s[i] <= '9') {
            val.push(to_string(s[i] - '0'));
        }
        else {

            string val1 = val.top();
            val.pop();

            string val2 = val.top();
            val.pop();

            string ans = solve(val1, val2, s[i]);
            val.push(ans);
        }
    }

    cout << val.top();

    return 0;
}