#include <iostream>
#include <stack>
using namespace std;

string solve(string val1, string val2, char oper) {
    return "(" + val1 + oper + val2 + ")";
}
int main() {
    string s = "-/*+79483";
    stack<string> val;
    for (int i = s.length() - 1; i >= 0; i--) {
        if (isdigit(s[i])) {
            val.push(string(1, s[i]));
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