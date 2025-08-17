#include<iostream>
#include<vector>
using namespace std;
int main(){
    vector<int>v(5);
    cout<<"size of v is :"<<v.size()<<endl;
    cout<<"Capacity of vector is: "<<v.capacity()<<endl;
    cout<<v[0]<<" "<<v[4]<<endl;

    vector<int>w(5,7);//size =5 and each value is 7
    cout<<"size of w is :"<<w.size()<<endl;
    cout<<"Capacity of vector w is: "<<w.capacity()<<endl;
    cout<<w[0]<<" "<<w[4];
}