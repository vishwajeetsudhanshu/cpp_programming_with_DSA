//INput a string of even length and reverse the first half of the string
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter the String : ";
    getline(cin,str);
    int len=str.length();
    cout<<"The length of String is : "<<len<<endl;
    reverse(str.begin()+0,str.begin()+len/2);
    cout<<"After Reverse : "<<str;

}
