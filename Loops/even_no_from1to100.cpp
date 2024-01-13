#include<iostream>
using namespace std;
int main()
{
    int i;
    cout<<"Even no. from 1 to 100 is "<<endl;
    /*for(i=1;i<=100;i++){
        if(i%2==0){
            cout<<i<<" ";
        }
    }*/
    for(i=2;i<=200;i=i+2){
        cout<<i<<" ";
    }
}