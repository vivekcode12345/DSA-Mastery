#include<iostream>
using namespace std;
// int maze(int sr,int sc,int er, int ec){
//     if(sr>er || sc>ec) return 0;
//     if(sr==er && sc==ec) return 1;
//     int rightways=maze(sr,sc+1,er,ec);
//     int downways=maze(sr+1,sc,er,ec);
//     int totalways=rightways+downways;
//     return totalways;
// }
int maze2(int row, int col){
    if(row<1 || col<1) return 0;
    if(row==1 && col==1) return 1;
    int rightways=maze2(row,col-1);  // right ways
    int downways=maze2(row-1,col);    // down ways
    int totalways=rightways+downways;
    return totalways;
}
//void path(int sr,int sc,int er, int ec,string s){
//     if(sr>er || sc>ec) return;
//     if(sr==er && sc==ec){
//         cout<<(s)<<endl;
//         return;
//     }
//     path(sr,sc+1,er,ec,s+'r');
//     path(sr+1,sc,er,ec,s+'d');
// }
int main(){
    //cout<<(maze(1,1,5,5));
    //path(1,1,3,3,""); // to know path direction
    cout<<maze2(4,4)<<endl; //
}