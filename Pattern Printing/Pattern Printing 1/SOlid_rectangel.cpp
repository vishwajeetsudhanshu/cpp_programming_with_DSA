#include<iostream>
using namespace std;
int main(){
    int r,c;
    cout<<"Enter the no. of rows: ";
    cin>>r;
    cout<<"Enter the no. of columns : ";
    cin>>c;
    for(int i=1;i<=r;i++){
        for(int i=1;i<=c;i++){
            cout<<"*";
        }
        cout<<endl;
    }
    
}