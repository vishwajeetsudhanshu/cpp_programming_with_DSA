//input sentsnce and split every single word in sentence in new line
#include<iostream>
#include<sstream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"ENter the Sentence : ";
    getline(cin,str);
    stringstream ss(str);
    string temp;
    while(ss>>temp){
        cout<<temp<<endl;
    }

}