<<<<<<< HEAD
//to find out the largest element of a given 2d array of integers
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int m;
    cout<<"Enter the no. of rows: ";
    cin>>m;
    int n;
    cout<<"Enter the no. of rows: ";
    cin>>n; 
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    //maimum
    int max=INT_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(max<arr[i][j]) max=arr[i][j];
        }
    }
    cout<<max;
    

=======
//to find out the largest element of a given 2d array of integers
#include<iostream>
#include<climits>
using namespace std;
int main(){
    int m;
    cout<<"Enter the no. of rows: ";
    cin>>m;
    int n;
    cout<<"Enter the no. of rows: ";
    cin>>n; 
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    //maimum
    int max=INT_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(max<arr[i][j]) max=arr[i][j];
        }
    }
    cout<<max;
    

>>>>>>> e835a1e610f77912e72b691c605af25c14b3609f
}