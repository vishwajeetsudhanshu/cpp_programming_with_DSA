//Input a string and return the number of times the neighbouring characters are different from each other
#include<iostream>
#include<algorithm>
#include<string>
using namespace std;
int main(){
    string str;
    cout<<"Enter the String : ";
    getline(cin,str);
    int count=0;
    int n=str.length();
    for(int i=0;i<n;i++){
        if(n==1){
            break;
        }
        if(n==2 && str[0]!=str[1]){
            count=1;
            break;
        }
        if(i==0){
            if(str[i]!=str[i+1]){
                count++;
            }
        }
        else if(i==n-1){
            if(str[i]!=str[i-1]){
                count++;
            }
        }
        else if(str[i]!=str[i+1] && str[i]!=str[i-1]){
            count++;
        }
    }
    cout<<count;




}