#include<iostream>
using namespace std;
int main(){
    int arr[]={4,2,6,1,7};
    int *ptr=arr;//giving Address of the element of an array
    // cout<<ptr<<endl;
    // cout<<&arr[0];
    // ptr[0]=8; //*ptr=8;/
    // ptr++;
    // *ptr=9;
    // ptr--;
    for (int i=0;i<=4;i++){
        // cout<<ptr[i]<<" ";
        // cout<<ptr[i]<<" ";
        // cout<<i[ptr]<<" ";
        cout<<i[arr]<<" ";
        
    }
    ptr=arr;//ptr is pointing to the 1st element
    *ptr=8;//ptr[0]=8
    ptr++;//ptr pointing to the 2nd element
    *ptr=9;//ptr[1]=9;
    ptr--;//ptr is 1st element
    cout<<endl;
    for(int i=0;i<=4;i++){
        cout<<*ptr<<" ";
        ptr++;
    }
    ptr=arr;

}