#include<iostream>
using namespace std;
int main()
{
    char ch;
    cout<<"Enter any character:- ";
    cin>>ch;
    if((ch>='a' && ch<='z')||(ch>='A' && ch<='Z')){
        cout<<"This is an alphabet";
    }
    else if(ch>='0' &&ch<='9'){
        cout<<"This is a digit";
    }
    else{
        cout<<"This is an speciall character";
    }
    
}