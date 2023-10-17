#include<iostream>
using namespace std ;
int main(){
    int cp;
    int sp;
    cout<<"Enter a cp:";
    cin>>cp;
    cout<<"Enter a sp:";
    cin>>sp;
    
    if(cp>sp){
        cout<<"loss of=";
        cout<<cp-sp;
    }
    if(sp>cp){
        cout<<"profit of:"<<sp-cp;
        
    }
    else{
        cout<<"Nor profit nor loss";
    }
}