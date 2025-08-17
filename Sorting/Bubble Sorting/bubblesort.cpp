#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n=9;
    int arr[]={5,4,0,-8,26,6,3,2,1}; 
    cout<<"Araay: ";
     for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    for(int i=0;i<n-1;i++){//n-1 passess
        //traverse
        for(int j=0;j<n-1;j++){
            if(arr[j]>arr[j+1]){
                //int temp=arr[j];
                //arr[j]=arr[j+1];
                //arr[j+1]=temp
                swap(arr[j],arr[j+1]);
            }
        }
 
    }
    cout<<endl;
    cout<<"After Sorting: ";
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}