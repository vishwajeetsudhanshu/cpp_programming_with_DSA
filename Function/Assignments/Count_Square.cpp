#include<iostream>
using namespace std;
int sqr(int n){
    return n*n;
}
int count(int num){
    int ans=0;
    while(num>0){
        ans++;
        num/=10;
    }
    return ans;
}
int main(){
    int n;
    cout<<"Enter a no : ";
    cin>>n;
    int digit=count(n);
    cout<<sqr(digit)<<endl;
    return 0;

}