#include<iostream>
using namespace std;
float rds(float r){
    return 3.14*r*r;;
}
int main(){
    float r;
    cout<<"Enter a no : ";
    cin>>r;
    cout<<rds(r);
    return 0;
}