#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int>v;
    v.push_back(6);//size 1,capacity 1
    v.push_back(1); //size 2,capacity 2
    v.push_back(9);//3,4
    v.push_back(10);//4,4
    v.push_back(6);//5,8
    v.push_back(1);//6,8
    v.push_back(9);//7,8
    v.push_back(10);//8,8
    // v.at(4)=85;
    // cout<<v.at(4);
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
    cout<<endl<<"After Sorting: "; 
    //for sort
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v.at(i)<<" ";
    }
}