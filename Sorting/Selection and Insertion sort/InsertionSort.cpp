#include<iostream>
#include<algorithm>
using namespace std;
int main(){
    int arr[]={5,3,2,5,8,9,14,4,75,63,8};
    int n=11;
    for(int ele:arr){//for each
        cout<<ele<<" ";
    }
    cout<<endl;
    //Insertion Sort
    for(int i=1;i<n;i++){
        int j=i;
        while(j>=1 && arr[j]<arr[j-1]){
            swap(arr[j],arr[j-1]);
            j--;
        }
    }
    for(int ele:arr){//for each
        cout<<ele<<" ";
    }
}