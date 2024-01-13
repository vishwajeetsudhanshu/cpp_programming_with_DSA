#include<iostream>
using namespace std;
int main()
{
    int rad,area,circum;
    cout<<"Enter radius=";
    cin>>rad;
    area=3.14*rad*rad;
    circum=2*3.14*rad;
    if(area>circum){
        cout<<"Area is greatest"<<area;

    }
    else{
        cout<<"Circum is greatest "<<circum;
    }

}