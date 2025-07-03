//Input a string of length greater than 5 and reverse the subtring from postion 2 to 5 using inbuilt function
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
    reverse(str.begin()+1,str.begin()+5);
    cout<<"After Reverse : "<<str;

}