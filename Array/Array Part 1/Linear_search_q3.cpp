//FInd the second largest elemnt in the given array
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int n;
    cout<<"Enter the Size of an array : ";
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cout<<"Enter the "<<i<<" Elents of an array : ";
        cin>>arr[i];
    }
    int max=INT_MIN;
    int max2=INT_MIN;
    for(int i=0;i<=n-1;i++){
        if(max<arr[i]) max=arr[i];
    }
    cout<<"Maximum"<<max<<endl;
    
    for(int i=0;i<=n-1;i++){
        if(arr[i]!=max && max2<arr[i]) max2=arr[i];
    }
    cout<<"2nd Maximum"<<max2;
    
}
