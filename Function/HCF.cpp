#include<iostream>
using namespace std;
int hcf(int a, int b){
    int gcd=1;
    for(int i=1;i<=min(a,b);i++){
        if(a%i==0 && b%i==0){
            gcd=i;
        }
    }
    return gcd;
}
int main(){
    int a,b;
    cout<<"Enter 1st number: ";
    cin>>a;
    cout<<"Enter 2nd number : ";
    cin>>b;
    cout<<hcf(a,b);
}