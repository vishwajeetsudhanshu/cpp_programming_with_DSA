#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the terms till you want:";
    cin>>n;
    int a=4;
    for(int i=1;i<=n;i++){
        cout<<a<<" ";
        a=a+3;
    }
}