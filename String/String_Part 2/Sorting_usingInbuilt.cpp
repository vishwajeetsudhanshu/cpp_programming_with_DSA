//lexigraphical--in alphabtical order
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter the String:";
    getline(cin,str);
    sort(str.begin(),str.end());
    cout<<str;


}
//lexigraphical follws the Acii value