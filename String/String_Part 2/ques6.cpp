//given n strings consisting of digits from 0 to 9 return the index o string which has maximum value 
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string arr[]={"0123","0023","456","940","002901"};
    int max=stoi(arr[0]);
    string maxs=arr[0];
    for(int i=1;i<5;i++){
        int x=stoi(arr[i]);
        if(x>max){
            max=x;
            maxs=arr[i];
        }
    }
    cout<<maxs;   
}