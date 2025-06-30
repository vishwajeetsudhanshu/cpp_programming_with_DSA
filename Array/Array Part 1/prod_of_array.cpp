#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Size of an array";
    cin>>n;
    int arr[n];
    for(int i=1;i<=n;i++){
        cout<<"Enter the "<< i << "elements of an array: ";
        cin>>arr[i];
    }
    int prod=1;
    for(int i=1;i<=n;i++){
        prod=prod*arr[i];
    }
    cout<<"The Product of an array is : "<<prod;
}