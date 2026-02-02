#include<iostream>
#include<climits>
using namespace std;
int main(){
    int arr[]={5,3,2,5,8,9,14,4,75,63,8};
    int n=11;
    for(int ele:arr){//for each
        cout<<ele<<" ";
    }
    cout<<endl;
    //Selection Sort
    for(int i=0;i<n-1;i++){
        int min=INT_MAX;
        int mindx=-1;
        //minimum elemets calculation in array box
        for(int j=i;j<n;j++){
            if(arr[j]<min){
                min=arr[j];
                mindx=j;
            }
        } 
        //Swap
        swap(arr[i],arr[mindx]);
    }
    for(int ele:arr){//for each
        cout<<ele<<" ";
    }
}