//WAP to count didgits of a given number
#include<iostream>
using namespace std;
int main (){
    int n;
    cout<<"Enter a number : ";
    cin>>n;
    int a=n;
    int count=0;
    while (n>0){
        n=n/10;
        count++;
        
    }
    if(a==0) cout<<1;
    else
    cout<<"The digit in the no is: "<<count;
}
