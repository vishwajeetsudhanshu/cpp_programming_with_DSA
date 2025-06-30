//Find the maximum value out of all the elements
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Size of an array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cout<<"Enter the "<<i<<" Elements of an array: ";
        cin>>arr[i];
    }
    //int max=arr[0];
    int max=INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(max<arr[i]) max=arr[i];
    }
    cout<<max;
  
    

}