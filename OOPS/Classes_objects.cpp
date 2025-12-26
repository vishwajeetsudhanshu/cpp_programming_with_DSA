#include<iostream>
using namespace std;
class player{
    public:
    int score;
    int health;
};
int main(){
    player amit;
    amit.score=90;
    amit.health=80;
    cout<<"Data of Amit"<<endl;
    cout<<amit.score<<endl;
    cout<<amit.health<<endl;

    player harsh;
    harsh.score=90;
    harsh.health=80;
    cout<<"Data of harsh"<<endl;
    cout<<harsh.score<<endl;
    cout<<harsh.health<<endl;
}