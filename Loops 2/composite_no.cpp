//break;
#include<iostream>
using namespace std;
int main ()
{
    int i;
    cout<<"Enter a nuber=";
    cin>>i;
    for(int j=2;j<=i-1;j++){
        if(i%j==0){
            cout<<i<<" is a composite no.";
            break;
        }
    }

}