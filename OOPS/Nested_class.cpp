//Passing classes to objects
#include<iostream>
using namespace std;
class Gun{
public:
    int ammo;
    int damage;
    int scope;
};
class Player{
private:
    class Helmet{//only player can use this helmet
    public:
        int hp;
        int level;
        
        void setHp(int hp){
            this-> hp=hp;
        }
        void setLevel(int level){
            this->level=level;
        }
        int getHp(){
            return hp;
        }
        int getLevel(){
            return level;
        }
    };
    int health;
    int age;
    int score;
    bool alive;
    Gun gun;
    Helmet helmet;
    
public:
    //getter
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
    Gun getGun(){
        return gun;
    }
    //setter
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
    void setGun( Gun gun){
        this->gun=gun;
    }
    void setHelmet(int level){
        Helmet *helmet=new Helmet;//dynamic allocation
        helmet->setLevel(level);
        int health=0;
        if(level==1)
            health=25;
        else if (level==2)
            health=50;
        else if (level==3)
            health=75;
        else
            cout<<"error,Invalid level !!!!"<<endl;
        helmet->setHp(health);
        this->helmet=*helmet;
    }
    void getHelmet(){
        cout<<helmet.getHp()<<endl;
        cout<<helmet.getLevel()<<endl;
    };

};

int main(){
    Player harsh;//object creation, statically
    Player raghav;//compile time,static allocation

   

    Gun awm;
    awm.ammo=100;
    awm.damage=50;
    awm.scope=2;
    harsh.setAge(22);
    harsh.setHealth(100);
    harsh.setIsAlive(true);
    harsh.setScore(70);
    harsh.setGun(awm);
    harsh.setHelmet(2);

    Gun akm;
    akm.ammo=150;
    akm.damage=95;
    akm.scope=8;
    raghav.setAge(25);
    raghav.setHealth(150);
    raghav.setIsAlive(true);
    raghav.setScore(100);
    raghav.setGun(akm);
    raghav.setHelmet(3);


    Gun gun124=harsh.getGun();
    cout<<gun124.damage<<endl;
    cout<<gun124.ammo<<endl;
    cout<<gun124.scope<<endl;
    cout<<"Harsh Helmet"<<endl;
    harsh.getHelmet();
    
    

    cout<<"Raghav"<<endl;
    Gun gun125=raghav.getGun();
    cout<<gun125.damage<<endl;
    cout<<gun125.ammo<<endl;
    cout<<gun125.scope<<endl;
    cout<<"Radhav Helmet"<<endl;
    raghav.getHelmet();
    //Array of objectss
    Player players[2]={harsh,raghav};
    cout<<endl<<players[0].getAge();

    
}