<<<<<<< HEAD
//Input a string of size n and update all the even positions in the string to charcter'a'
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter the String : ";
    getline(cin,str);
    // cout<<str<<endl;;
    int i=0;
    for(int i=0;str[i]!='\0';i++){
        if(i%2==0){
        str[i]='a';
        }
    }
    cout<<"After Updation :- "<<str;
    
}

=======
//Input a string of size n and update all the even positions in the string to charcter'a'
#include<iostream>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter the String : ";
    getline(cin,str);
    // cout<<str<<endl;;
    int i=0;
    for(int i=0;str[i]!='\0';i++){
        if(i%2==0){
        str[i]='a';
        }
    }
    cout<<"After Updation :- "<<str;
    
}

>>>>>>> e835a1e610f77912e72b691c605af25c14b3609f
