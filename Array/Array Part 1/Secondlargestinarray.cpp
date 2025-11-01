#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n ;
    cout<<"Enter the size of an array : ";
    cin>>n;
    int arr[n];
    for(int i=0 ;i<n;i++){
        cin>>arr[i];
    }
    int max=INT_MIN;
    for(int i=0;i<n;i++){
        if(max<arr[i]){
            max=arr[i];
        }
    }
    cout<<"largest element in array is :  "<<max<<endl;
    // int smax=arr[0];
    int smax=INT_MIN;
    for(int i=0;i<n;i++){
        if(smax<arr[i] && arr[i]!=max){
            smax=arr[i];
        }
    }
    cout<<"The second largest element in array is :  "<<smax;
}