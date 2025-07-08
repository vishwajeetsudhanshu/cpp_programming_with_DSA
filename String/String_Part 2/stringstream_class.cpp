#include<iostream>
#include<string>
#include<algorithm>
#include<vector>
#include<sstream>
using namespace std;
int main(){
    string str="Sanny is     a    good student";
    stringstream ss(str);
    string temp;
    while(ss>>temp){//taking input in temp from strinstream
        cout<<temp<<endl;
    }

}
