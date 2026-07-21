#include <iostream>
#include <stack>
using namespace std;

int prio(char ch) {
    if (ch == '+' || ch == '-')
        return 1;
    else
        return 2;
}
string solve(string val1, string val2, char ch){
    string ans="";
    ans+=val1;
    ans+=val2;
    ans.push_back(ch);  
    return ans;
}

int main() {

    string s = "2+4+3*3";

    stack<string> val;
    stack<char> op;

    for (int i = 0; i < s.length(); i++) {
        if (s[i] >= 48 && s[i] <= 57) {
            val.push(to_string(s[i] - 48));
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

                    string v2 = val.top();
                    val.pop();

                    string v1 = val.top();
                    val.pop();
                    string ans=solve(v1, v2, oper);
                    val.push(ans);
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

                    string v2 = val.top();
                    val.pop();

                    string v1 = val.top();
                    val.pop();

                    string ans=solve(v1, v2, oper);
                    val.push(ans);
                }
                op.push(s[i]);
            }
        }
    }

    while (!op.empty()) {
        char oper = op.top();
        op.pop();
        string v2 = val.top();
        val.pop();
        string v1 = val.top();
        val.pop();
        string ans=solve(v1, v2, oper);
        val.push(ans);
    }
    cout << val.top();
    return 0;
}