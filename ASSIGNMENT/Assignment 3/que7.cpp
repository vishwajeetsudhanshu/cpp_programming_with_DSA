#include<iostream>
using namespace std;
int main()
{
    int a,b;
    cout<<"Enter a-b cooridates= ";
    cin>>a>>b;
    if(a==0&&b==0){
        cout<<"The point is on origin";

    }
    if(a==0&&b!=0){
        cout<<"The point is on b axis";

    }
    if(a!=0&&b==0){
        cout<<"The point is on a axis";

    }
    if(a=0&&b!=0){
        cout<<"The point is on plane";

    }

}