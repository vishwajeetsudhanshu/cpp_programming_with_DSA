#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the sides : ";
    cin>>n;
    // cout<<"Enter the no of columns : ";
    // cin>>m;
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
             cout<<"*";
        }
        cout<<endl;   
    }
    
}