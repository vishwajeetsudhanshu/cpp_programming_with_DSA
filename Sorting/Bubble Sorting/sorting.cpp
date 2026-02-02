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
    sort(v.begin(),v.end());//O(n logn)
    cout<<"Ascending Order : ";
    for(int i=0;i<5l;i++){
        cout<<v[i]<<" ";

    }
    cout<<endl;
    reverse(v.begin(),v.end());
    cout<<"Descending Order : ";
    for(int i=0;i<5l;i++){
        cout<<v[i]<<" ";

    }

}