#include<iostream>
#include<string>
using namespace std;
int main(){
    string s;
    cout<<"Enter the String: ";
    cin>>s;
    
    int count=0;
    int answer=0;

    for(int i=0;i<s.size();i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u'){
            count++;
        }else{
            answer+=count *(count+1)/2;
            count=0;
        }
    }

    answer+=count *(count+1)/2;
    cout<<"The total number of substrings containing vowels is: "<<answer<<endl;

}