#include<iostream>
using namespace std;
int sqr(int n){
    return n*n;
}
void firstNsquare(int n){
    for(int i=1;i<=n;i++){
        cout<<i<<" "<<sqr(i)<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter a no : ";
    cin>>n;
    firstNsquare(n);
    return 0;
}