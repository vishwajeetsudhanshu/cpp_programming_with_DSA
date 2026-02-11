#include<iostream>
using namespace std;
int sum1toN(int n){
    if(n==0) return 0;
    int ans=n+sum1toN(n-1);
    return ans;
}
int main(){
    int x;
    cout<<"ENter a no: ";
    cin>>x;
    cout<<"The Sum of no till "<<x<<" is : ";
    cout<<sum1toN(x);
} 