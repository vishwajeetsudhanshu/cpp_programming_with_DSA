#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter First,Second and third side";
    cin>>a>>b>>c;
    if(( a*b==b*c)||(b*c==c*a)||(c*a==a*b)){
        cout<<"Issoseles Triangle";

    }
    else{
        cout<<"No";
    }

}