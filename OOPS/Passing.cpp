//Passing classes to objects
#include<iostream>
using namespace std;
class Player{
private:
    int health;
    int age;
    int score;
    bool alive;
public:
    int getHealth(){
        return health;
    }
    int getAge(){
        return age;
    }
    int getScore(){
        return score;
    }
    int isAlive(){
        return alive;
    }
    void setHealth(int health){
        this->health= health;
    }
    void setAge(int age){
        this->age=age;
    }
    void setScore( int score){
        this->score= score;
    }
    void setIsAlive(bool alive){
        this->alive= alive;
    }

};
int addScore(Player a, Player b){
    return a.getScore()+b.getScore();
}
Player getMaxScorrePlayer(Player a,Player b){
    if(a.getScore()>b.getScore())
        return a;
    else    
        return b;
}
int main(){
    Player harsh;
    Player raghav;
    harsh.setAge(22);
    harsh.setHealth(100);
    harsh.setIsAlive(true);
    harsh.setScore(70);

    raghav.setAge(25);
    raghav.setHealth(150);
    raghav.setIsAlive(true);
    raghav.setScore(100);
    cout<<addScore(harsh,raghav)<<endl;

    Player sanket= getMaxScorrePlayer(harsh, raghav);
    cout<<sanket.getScore();

}