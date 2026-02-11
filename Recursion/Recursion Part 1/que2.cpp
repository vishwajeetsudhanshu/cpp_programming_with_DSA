//Make a function which becomes a raise to power b
#include<iostream>
using namespace std;
int power(int a,int b){
    if(b==0) return 1;
    int ans=a*power(a,b-1);
    return ans;
}
int main(){
    int x,y;
    cout<<"ENter the value of x and y: ";
    cin>>x>>y;
    cout<<power(x,y);
}