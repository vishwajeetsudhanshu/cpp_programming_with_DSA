//Parameterized constructor
//used for values initialization
#include<iostream>
#include<vector>
#include<string>
using namespace std;
class Bike{
    public:
    int tyreSize;
    int engineSize;

    //deafult constructor
    Bike (int tyreSize, int engineSize){
        this->tyreSize = tyreSize;
        this->engineSize=engineSize;
        cout<<"Constructor call huaa!\n";
    }
};
int main(){
    Bike tvs(12,150);//object creation//constructor ko call jaayegi 
    Bike honda(13,125);
    Bike royal(15,350);
    cout<<tvs.tyreSize<<" "<<tvs.engineSize<<endl;
    cout<<honda.tyreSize<<" "<<honda.engineSize<<endl;
    cout<<royal.tyreSize<<" "<<royal.engineSize<< endl;
   
}