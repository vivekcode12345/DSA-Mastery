#include<iostream>
using namespace std;

class player{
    private:
    int score;
    int health;
    string name;

    public:
    void setScore(int s){
        score=s;
    }
    int getScore(){
        return score;
    }
    void setHealth(int h){
        health=h;
    }
    int getHealth(){
        return health;
    }
    void setName(string n){
        name=n;
    }
    string getName(){
        return name;
    }
};
int addScore(player p1, player p2){
    return p1.getScore() + p2.getScore();
}
player Max(player p1, player p2){
    if(p1.getScore() > p2.getScore()){
        return p1;
    }
    else{
        return p2;
    }
}
int main(){
    player amit; // compile time static allocation of object 
    player rahul; // compile tiime static static allocaion of object 
    amit.setScore(90);
    amit.setHealth(100);
    amit.setName("Amit");
    rahul.setScore(85);
    rahul.setHealth(95);
    rahul.setName("Rahul");

    cout<< addScore(amit, rahul) << endl;
    player maxPlayer = Max(amit, rahul);

    cout << "Max Score Player: " << maxPlayer.getName() << " with score " << maxPlayer.getScore() << endl;
    
    return 0;
}
