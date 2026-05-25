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
int main(){
    player amit;
    amit.setScore(90);
    amit.setHealth(100);
    amit.setName("Amit");
    cout << amit.getScore() << endl;
    cout << amit.getHealth() << endl;
    cout << amit.getName() << endl;
    return 0;
}