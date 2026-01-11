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
    cout<<"Largest elements in array is: ";
    //maimum
    int max=INT_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(max<arr[i][j]) max=arr[i][j];
        }
    }
    cout<<max;
    cout<<endl;
    int smax=INT_MIN;
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            if(smax<arr[i][j] && arr[i][j]!=max){
                smax=arr[i][j];
            }
        }
    }
    cout<<"The Second largest elemnts in array is: "<<smax;

  
}