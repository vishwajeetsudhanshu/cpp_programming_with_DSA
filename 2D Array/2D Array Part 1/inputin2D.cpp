<<<<<<< HEAD
#include<iostream>
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
    //print
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

=======
#include<iostream>
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
    //print
     for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }

>>>>>>> e835a1e610f77912e72b691c605af25c14b3609f
}