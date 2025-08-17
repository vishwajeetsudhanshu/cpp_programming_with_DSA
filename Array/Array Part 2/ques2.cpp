//write a program to copy the contents of one array into another array in the reverse order without using extra array
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
void display(vector<int>&a){
    cout<<"the elements are: ";
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
}
int main(){
    vector<int> v;
    int x;
    cout<<"Enter the size of an array: ";
    cin>>x;
    cout<<"Enter the elemts of an array:";
    for(int i=0;i<x;i++){
        int y;
        cin>>y;
        v.push_back(y);
    }
    display(v);
    //reverse 
    int i=0;
    int j=x-1;
    while(i<=j){
        //swapv[i]andv[j]
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    cout<<"After Reverse ";
    display(v);

}   

