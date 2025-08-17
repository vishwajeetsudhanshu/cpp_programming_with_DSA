<<<<<<< HEAD
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

=======
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

>>>>>>> e835a1e610f77912e72b691c605af25c14b3609f
}