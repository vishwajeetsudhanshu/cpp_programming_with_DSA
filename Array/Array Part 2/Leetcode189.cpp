#include<iostream>
#include<vector>
using namespace std;
void display(vector<int>&v){
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    cout<<endl;
    
}
void reversePart(int i,int j,vector<int>&v){
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    return;
}
int main(){
    vector<int> v;
    int n;
    int k;
    cout<<"Enter the Array Size: ";
    cin>>n;
    cout<<"Enter the Array Elements: ";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    display(v);
    cout<<"ENter How many times you want to rotate ";
    cin>>k;
    //rotate
    if(k>n){
       k=k%n; 
    }
    reversePart(0,n-k-1,v);
    reversePart(n-k,n-1,v);
    reversePart(0,n-1,v);
    display(v);

}