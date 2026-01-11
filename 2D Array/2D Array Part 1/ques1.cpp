
//Rolll no marks side by side for student
#include<iostream>
using namespace std;
int main(){
    int roll;//rows
    cout<<"Enter the Roll no of students: ";
    cin>>roll;
    int marks;//columns
    cout<<"Enter the marks of students: ";
    cin>>marks;
    int arr[roll][marks];
    for(int i=0;i<roll;i++){
        for(int j=0;j<marks;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"The marks of student respect to roll no is :"<<endl;
    for(int i=0;i<roll;i++){
        for(int j=0;j<marks;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }



}