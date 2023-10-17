#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"enter the no:";
    cin>>x;
    if (x%3==0 || x%5==0){
        cout<<"Divisible by 3 or 5";
    }
    else{
        cout<<"not by 5 and not even by 3";
    }
}
