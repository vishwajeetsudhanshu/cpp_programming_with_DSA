#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter first no:";
    cin>>a;
    cout<<"Enter second no:";
    cin>>b;
    char ch;
    cout<<"Which operation you want to perform";
    cin>>ch;
    switch(ch){
        case '+':
        cout<<a+b;
        break;
        case '%':
        cout<<a%b;
        break;
        case '-':
        cout<<a-b;
        break;
        case '*':
        cout<<a*b;
        break;
        case '/':
        cout<<a/b;
        break;
        default:
        cout<<"Invalid";
    
    }
}