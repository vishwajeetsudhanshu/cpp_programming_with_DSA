#include<iostream>
using namespace std;
int main(){
    int n,i;
    cout<<"Enter the no. of terms for Ap: ";
    cin>>n;
    // for(i=1;i<=2*n-1;i+=2){
    //     cout<<i<<" ";
    //     ;
    // }
    int a=4;
    for(i=1;i<=n;i++){
        cout<<a<<" ";
        a=a+3;
    }

}