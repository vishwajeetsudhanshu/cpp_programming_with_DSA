#include<iostream>
using namespace std;
int main()
{
    int a=1,i,x;
    cout<<"The G.P of n value is=="<<endl;
    cin>>x;
    // for(i=1;i<=2*x-1;i=i+2){
    //     cout<<i<<" ";
    // }
    for(i=1;i<=x;i++){
        cout<<a<<" ";
        a=a*2;
    }

}
