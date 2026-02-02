#include<iostream>
#include<string>
using namespace std;
int main(){
    string s="ABCGCXYZSETYXAZRYXZYZ";
    string str="";
    for(int i=0;i<s.size();i++){
        if(s[i]>='X') str.push_back(s[i]);
    }
    cout<<str<<endl;
    for(int i=0;i<str.size()-1;i++){
        //traverse
        bool flag=true;
        for(int j=0;j<str.size()-1-i;j++){
            if(str[j]<str[j+1]){
                swap(str[j],str[j+1]);
                flag=false;
            }
        }
    if(flag==true)
        break;
    
    }
    cout<<"After Sorting: ";
    cout<<str;
}
