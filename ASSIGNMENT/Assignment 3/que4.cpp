#include<iostream>
using namespace std;
int main()
{
    int len,bred,area,peri;
    cout<<"Enter lenght and breadth=";
    cin>>len>>bred;
    area=len*bred;
    peri=2*(len+bred);
    if(area>peri){
        cout<<"Area is greatest  "<<area;

    }
    else{
        cout<<"Perimeter is greatest "<<peri;
    }

}