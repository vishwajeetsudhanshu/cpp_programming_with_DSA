//Linear search
//Find the element x in the array.Take array and x as an input
#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the size of an array: "; 
    cin>>n;
    int arr[n];
    for(int i=0;i<=n-1;i++){
        cout<<"Enter the "<< i <<" Elemnts of an array: ";
        cin>>arr[i];
    }  
    int x;
    cout<<"Enter the elemts you want to search : ";
    cin>>x;
    //search
    //checkmark
    bool flag=false;//false-not present
    for(int i=0;i<=n-1;i++){
         if(arr[i]==x) flag = true;
            
        }
        if(flag==true) cout<<"Elements Found";
        else cout<<"404 Not Found";
}

