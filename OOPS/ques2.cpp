#include<iostream>
using namespace std;
class Cricketer{
    public:
    char name;
    int age;
    int ntest;
    int avg;

    //setter
    public:
    void setName(char n){
        name=n;
    }
    void setAge(int age){
        this->age=age;
    }
    void setTest(int ntest){
        this->ntest=ntest;
    }
    void setAvg(int avg){
        this->avg=avg;
    }
    //getter
    char getName(){
        return name;
    }
    int getAge(){
        return age;
    }
    int getTest(){
        return ntest;
    }
    int getAvg(){
        return avg;
    }
};
int main(){
    Cricketer virat;
    virat.setName('V');
    virat.setAge(35);
    virat.setTest(105);
    virat.setAvg(50);

    Cricketer dhoni;
    dhoni.setName('M');
    dhoni.setAge(43);
    dhoni.setTest(90);
    dhoni.setAvg(40);

    Cricketer cricketers[2]={virat , dhoni};
    for(int i=0;i<2;i++){
        cout<<cricketers[i].getName()<<endl;
        cout<<cricketers[i].getAge()<<endl;
        cout<<cricketers[i].getTest()<<endl;
        cout<<cricketers[i].getAvg()<<endl;

    }
}