//find the last occurence of x in the array
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(9);
    v.push_back(10);
    v.push_back(6);
    v.push_back(1);
    v.push_back(6);
    v.push_back(11);
    int x;
    cout<<"Enter the number: ";
    cin>>x;
    int idx=-1;
    // for(int i=0;i<v.size();i++){
    //     if(v[i]==x){
    //         idx=i;
    //     }   
    // }   
    for (int i=v.size()-1;i>=0;i--){
        if(v[i]==x){
            idx=i;
            break;
        }
    }
    cout<<"The index of last occurence is :"<<idx;
}