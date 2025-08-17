//Given a strings consisting of lowercase english alpha print the char that occuriing most
#include<iostream>
#include<string>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    string str;
    cout<<"Enter the String : ";
    getline(cin,str);
    vector <int> arr(26,0);
    for(int i=0;i<str.length();i++){
        char ch=str[i];
        int ascii=(int)ch;
        arr[ascii-97]++;
    }
    int mx=0;
    for(int i=0;i<26;i++){
        if(arr[i]>mx) mx=arr[i];
    }
    for(int i=0;i<26;i++){
        if(arr[i]==mx){
            int ascii=i+97;
            char ch=(char)ascii;
            cout<<ch<<" "<<mx<<endl;
        }
    }
     

}