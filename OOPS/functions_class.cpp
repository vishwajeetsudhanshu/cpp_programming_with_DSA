//Functions inside the class
#include<iostream>
using namespace std;
class Player{
    public:
    int score;//Data members
    int health;

    void showhealth(){//member function
        cout<<"Health is: "<<health;
    }
};
int main(){
    Player amit;
    amit.score=20;
    amit.health=90;

    amit.showhealth();
}