#include<iostream>
using namespace std;
int main()
{
    int x;
    cout<<"Enter an integer: ";
    cin>>x;
    if(x%5==0){
        if(x%3==0){
            cout<<"The number is divisible by 5 and 3";
        }
        else{
             cout<<"The number is divisible by 5 but not 3";
        }
    }
    else{
        cout<<"Not matching condition";
    }
}