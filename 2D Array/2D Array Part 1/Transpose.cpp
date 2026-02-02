
#include<iostream>
using namespace std;
int main(){
    int m;//rows
    cout<<"Enter the no. of rows: ";
    cin>>m;
    int n;//columns
    cout<<"Enter the no. of rows: ";
    cin>>n; 
    int arr[m][n];
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
        }
    }
    //print
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
    // //for  store transpose m-1
    // int t[n][m];
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         t[i][j]=arr[j][i];
    //     }
    // }
    // //printing transpose
    // cout<<"The transpose of matrix is : "<<endl;
    // for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         cout<<t[i][j]<<" ";
    //     }
    //     cout<<endl;
    // }
    //Method -2 Column wise printing
    for(int j=0;j<n;j++){//for column
        for(int i=0;i<m;i++){//rows
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }


}