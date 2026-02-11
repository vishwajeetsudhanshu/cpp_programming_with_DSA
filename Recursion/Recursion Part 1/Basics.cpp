/*
What and why ?


*/
#include<iostream>
using namespace std;
void gun(){
    return;//khatam krna 
    cout<<"Hello CW"<<endl;
}
void fun(){
    cout<<"Hello PW"<<endl;
    gun();
    return;
}
int main(){
    fun();
}