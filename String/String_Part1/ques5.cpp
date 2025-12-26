
//Input a string of even length and return the second half of string using inbuilt function
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter the String : ";
    getline(cin,str);
    int len=str.length();
    cout<<"The length of String is : "<<len<<endl;
    cout<<"Return second half value : "<<str.substr(len/2,len);

}