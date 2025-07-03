#include<iostream>
using namespace std;
int main(){
    char str[5]={'a','b','c','d','e'};//stringgggggg
    // for (int i=0;i<=4;i++){
    //     cout<<str[i]<<" ";
    // }
    //cout<<"My Name is Sanny";//this is string
    // cout<<(int)(str[5]);
    for(int i=0;str[i]!='\0';i++){
        cout<<str[i]<<" ";
    }
    cout<<endl;
    cout<<str<<endl;
}