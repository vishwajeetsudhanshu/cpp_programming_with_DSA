#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter the First no:";
    cin>>x;
    cout<<"Enter the Second no:";
    cin>>y;
    cout<<"Enter the Third  no:";
    cin>>z;
    if(x>y && x>z){
        cout<<x<<"The first no is greatest";
    }
    if(y>x && y>z){
        cout<<y<<"The second no is greatest";
    }
    if(z>x && z>y){
        cout<<z<<"The third no is greatest";
    }
    
    
}