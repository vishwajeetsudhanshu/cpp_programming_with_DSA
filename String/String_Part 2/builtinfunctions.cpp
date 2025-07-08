//stoi-string to inter and stoll -string to long long
#include<iostream>
#include<string>
#include<typeinfo>
using namespace std;
int main(){
    // string to interegr
    string str="123456";
    int x=stoi(str);
    cout<<x<<endl;
    cout<<typeid(x).name();
    cout<<endl;
    //stoll- string to lon long
    string str2="123465445656";
    long long y=stoll(str2);
    cout<<y<<endl;
}