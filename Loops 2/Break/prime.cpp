//WAP to check if a number is a prime or not prime no means no factor other than 1 and itself
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter a number: ";
    cin>>n;
    bool flag=true;
    for(int i=2;i<n-1;i++){
        if(n%i==0){
            flag = false;
            break;
        }
    }
    if(n==1) cout<<"1 is neither a prime nor a composite";
    else if(flag==true)cout<<n<<" is a prime";
    else cout<<n<<" is a composite number";
}