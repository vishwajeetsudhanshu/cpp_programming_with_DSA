#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter no of students :";
    cin>>n;
    int marks[n];//0 to n-1
    //for input
    cout<<"Enter the marks : ";
    for(int i=0;i<=n-1;i++){
        cin>>marks[i];
    }
    cout<<"Marks less than 35 : ";
    for(int i=0;i<=n-1;i++){
        if(marks[i]<35){
            cout<<i<<" ";
        }
    }
}