#include<iostream>
#include<string>
using namespace std;

class Player{
    public:
    int score;
    int health;
    string name;
};

int main(){
    Player amit;
    amit.score=90;
    amit.health=100;
    amit.name="Amit";
    cout << amit.score << endl;
    cout << amit.health << endl;
    cout << amit.name << endl;
    return 0;
}
