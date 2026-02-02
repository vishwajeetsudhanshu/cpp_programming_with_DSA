//Push Zeroes to the end while maintaing the relative order of other elements
#include<iostream>
#include<vector>
using namespace std;
int main(){
    int arr[]={5,0,1,2,0,0,4,0,3,4,6,3,2,1};
    int n=14;
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout<<endl;
    //bubble sort
    for(int i=0;i<n-1;i++){ //n-1 pass
        //traverse
        for(int j=0;j<n-1-i;j++){
            if(arr[j]==0){
                //swap
                // int temp=arr[j];
                // arr[j]=arr[j+1];
                // arr[j+1]=temp;
                swap(arr[j],arr[j+1]);
            }
        }
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}