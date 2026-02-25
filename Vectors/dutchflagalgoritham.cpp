#include<iostream>
#include<vector>
using namespace std;
void sort01(vector<int>&v){
    int low=0;
    int mid=0;
    int hi=v.size()-1;
    while(mid<=hi){
        if(v[mid]==2){
            int temp=v[mid];
            v[mid]=v[hi];
            v[hi]=temp;
            hi--;
        }
        else if(v[mid]==0){
            int temp=v[mid];
            v[mid]=v[low];
            v[low]=temp;
            low++;
            mid++;
        }
        else{
            mid++;
        }
    }

}
void display(vector<int>&a){
    int n=a.size();
    for(int i=0;i<n;i++){
        cout<<a[i]<<" ";

    }
    cout<<endl;


}
int main(){
    vector<int>v;
    v.push_back(0);
    v.push_back(1);
    v.push_back(2);
    v.push_back(2);
    v.push_back(0);
    v.push_back(0);
    v.push_back(0);
    v.push_back(1);

    display(v);
    sort01(v);
    display(v);
}    

