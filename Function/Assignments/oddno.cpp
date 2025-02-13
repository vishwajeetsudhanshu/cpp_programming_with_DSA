#include<iostream>
using namespace std;
void odd(int a,int b){
    if(a>b){
        odd(b,a);
        return;
    }
    for(int i=a;i<=b;i++){
        if(i%2 !=0){
            cout<<i<<" ";
        }
    }
    cout<<endl;
    
}
int main(){
    int a,b;
    cout<<"Enter a no: ";
    cin>>a;
    cout<<"Enter a no: ";
    cin>>b;
    odd(a,b);
    return 0;
}