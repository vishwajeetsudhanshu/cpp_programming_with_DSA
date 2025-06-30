#include<iostream>
using namespace std;
int main(){
    int size;
    cout<<"Enter the size of an array ";
    cin>>size;
    int arr[size];
    for (int i=1;i<=size;i++){
        cin>>arr[i];
        cout<<arr[i]<<endl;
    }
    return 0;
}