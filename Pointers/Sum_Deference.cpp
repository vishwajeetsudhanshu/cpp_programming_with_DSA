#include<iostream>
using namespace std;
int main(){
    int x,y;
    int* p1=&x;
    int* p2=&y;
    cout<<"Enter the no: ";
    // cin>>x;
    cin>>*p1;
    cout<<"Enter the no: ";
    // cin>>y;
    cin>>*p2;
    cout<<"Sum of two no is "<<*p1+ *p2;
}