#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    vector<int> v(5);
    cout<<"Enter the vector: ";
    for(int i=0;i<5;i++){
        cin>>v[i];
    }
    sort(v.begin(),v.end());//)(n logn)
    reverse(v.begin(),v.end());
    for(int i=0;i<5l;i++){
        cout<<v[i]<<" ";

    }

}