#include<iostream>
using namespace std;
int main(){
    int std;
    cout<<"Enter the no. of students ";
    cin>>std;
    int marks[std];
    cout<<"Enter the marks of students ";
    for (int i=0;i<=std-1;i++){
        cin>>marks[i];
    }
    cout<<"Roll No of Students whose marks is less than 35 is ";
    for (int i=0;i<=std-1;i++){
         if(marks[i]<35){
             cout<<i<<" ";
            }
    }
   
}