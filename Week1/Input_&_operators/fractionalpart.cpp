#include<iostream>
using namespace std;
int main(){
    float x;
    cout<<"Enter the no.";
    cin>>x;
    int y=int(x);
    if(y<0) y=y-1;
    cout<<x-y;

}