#include<iostream>
using namespace std;
int main ()
{
    int i;
    cout<<"Enter a nuber=";
    cin>>i;
    bool flag = true;//true means prime
    for(int j=2;j<=i-1;j++){
        if(i%j==0){
           flag=false;//false means composite
            break;
        }
    }
    if(i==1) cout<<"1 is neither prime  nor composite";
    else if(flag==true) cout<<i<<"is prime";
    else cout<<i<<"is composite";

}