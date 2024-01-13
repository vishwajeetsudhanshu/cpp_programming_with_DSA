#include<iostream>
using namespace std;
int main(){
    int x,y,z;
    cout<<"Enter first no:-";
    cin>>x;
    cout<<"Enter second no:-";
    cin>>y;
    cout<<"Enter third  no:-";
    cin>>z;
    if(x>y){
        if(x>z){
            cout<<x<<"First no. is greatest";
        }
        else{
            cout<<z<<"Third is greatest";
        }
    }
    else{//y>x
        if(y>z){
            cout<<y<<"Second is greatest";
        }
        else{
            cout<<z<<"Third is greatest";
        }

    }
    
}