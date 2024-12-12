//Two positive numbers are entered through the keyword.Write a program to 
//find the value of one number raised to the power
//of another
#include<iostream>
using namespace std;
int main(){
    int a ,b;
    cout<<"Enter the base : ";
    cin>>a;
    cout<<"Enter the exponent : ";
    cin>>b;
    bool flag=true;
    if(b<0){
        flag=false;
        b=-b;
    }
    float power=1;
    for(int i=1;i<=b;i++){
        power=power*a;
    }
    if(flag==false){
        power=1/power;
        b=-b;
    }
    cout<<a<<" raised to the power "<<b<<" is "<<power;

}