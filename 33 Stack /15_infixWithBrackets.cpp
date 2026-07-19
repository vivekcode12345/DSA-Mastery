#include <iostream>
#include <stack>
using namespace std;

int prio(char ch) {
    if (ch == '+' || ch == '-')
        return 1;
    else
        return 2;
}

int solve(int val1, int val2, char ch) {
    if (ch == '+')
        return val1 + val2;
    else if (ch == '-')
        return val1 - val2;
    else if (ch == '*')
        return val1 * val2;
    else
        return val1 / val2;
}

int main() {

    string s = "(2+14)*4/8-3";

    stack<int> val;
    stack<char> op;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= '0' && s[i] <= '9') {
            val.push(s[i] - '0');
        }
        else {
            if (op.size()==0) {
                op.push(s[i]);
            }
            else if(s[i]=='('){
                op.push(s[i]);
            }
            else if(op.top()=='('){
                op.push(s[i]);
            }
            else if(s[i]==')'){
                while(op.top()!='('){
                    char oper = op.top();
                    op.pop();

                    int v2 = val.top();
                    val.pop();

                    int v1 = val.top();
                    val.pop();

                    val.push(solve(v1, v2, oper));
                }
                op.pop();
            }
            else if(prio(s[i])>prio(op.top())){
                op.push(s[i]);
            }
            
            else {
                while (!op.empty() && prio(s[i]) <= prio(op.top())) {

                    char oper = op.top();
                    op.pop();

                    int v2 = val.top();
                    val.pop();

                    int v1 = val.top();
                    val.pop();

                    val.push(solve(v1, v2, oper));
                }
                op.push(s[i]);
            }
        }
    }

    while (!op.empty()) {
        char oper = op.top();
        op.pop();

        int v2 = val.top();
        val.pop();

        int v1 = val.top();
        val.pop();

        val.push(solve(v1, v2, oper));
    }
    cout << val.top();
    cout<<endl;
    cout<<(2+14)*4/8-3<<endl;
    return 0;
}