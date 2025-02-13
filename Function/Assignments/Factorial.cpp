#include<iostream>
using namespace std;
int fact(int a){
    int fact=1;
    for(int i=2;i<=a;i++){
        fact*=i;

    }
    return fact;
}
int main(){
    int a;
    cout<<"Enter a no: ";
    cin>>a;
    for(int i=1;i<=a;i++){
        cout<<fact(i)<<endl;
    }

}