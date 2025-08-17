<<<<<<< HEAD
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
=======
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
>>>>>>> e835a1e610f77912e72b691c605af25c14b3609f
