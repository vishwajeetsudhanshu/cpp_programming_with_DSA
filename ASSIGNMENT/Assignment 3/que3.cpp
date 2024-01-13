#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter year=";
    cin>>x;
    if(x%4==0){
        cout<<"Yes it's leap year"<<x;

    }
    else{
        cout<<"No";
    }

}