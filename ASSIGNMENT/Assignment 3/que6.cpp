#include<iostream>
using namespace std;
int main()
{
    int a,b,c;
    cout<<"Enter marks of a ,b and c subject";
    cin>>a>>b>>c;
    if(a>b&&a>c){
        cout<<"First subject is greatest"<<a;

    }
    else if(b>c&&b>a){
        cout<<"Second subject is greatest"<<b;

    }
    else{
        cout<<"Third subject hs greaest"<<c;
    }

}