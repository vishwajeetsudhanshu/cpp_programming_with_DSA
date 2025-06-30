#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int> v;
    v.push_back(6);//size 1,capacity 1
    v.push_back(1); //size 2,capacity 2
    v.push_back(9);//3,4
    v.push_back(10);//4,4
    v.push_back(6);//5,8
    v.push_back(1);//6,8
    v.push_back(9);//7,8
    v.push_back(10);//8,8
    v.push_back(6);//9,16
    v.push_back(1);//10,16
    v.push_back(9);//11,16
    v.push_back(10);//12,16
    v.push_back(6);//13,16
    v.push_back(1);//14,16
    v.push_back(9);//15,16
    v.push_back(10);//16,16
    v.push_back(10);//17,32
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"Size is "<<v.size()<<endl;
    cout<<"Capacity is : "<<v.capacity();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    v.pop_back();
    cout<<endl;
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    cout<<"Size is "<<v.size()<<endl;
    cout<<"Capacity is : "<<v.capacity();
    
}
