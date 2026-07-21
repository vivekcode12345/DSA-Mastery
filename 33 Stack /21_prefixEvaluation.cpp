#include <iostream>
#include <stack>
using namespace std;

int solve(int val1, int val2, char oper) {
    if (oper == '+')
        return val1 + val2;
    else if (oper == '-')
        return val1 - val2;
    else if (oper == '*')
        return val1 * val2;
    else if (oper == '/')
        return val1 / val2;

    return 0;
}
int main() {
    string s = "-/*+79483";
    stack<int> val;
    for (int i = s.length() - 1; i >= 0; i--) {
        if (isdigit(s[i])) {
            val.push(s[i] - '0');
        }
        else {
            int val1 = val.top();
            val.pop();
            int val2 = val.top();
            val.pop();
            int ans = solve(val1, val2, s[i]);
            val.push(ans);
        }
    }
    cout << val.top();
    return 0;
}