#include<iostream>
using namespace std;
int main(){
    // int arr[3][3]={{1,2,3},{4,5,6},{7,8,9}};
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    for(int i=0;i<=2;i++){//i is rows
        for(int j=0;j<=2;j++){ // j is columns
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

}
