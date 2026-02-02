#include<iostream>
using namespace std;
void display(int m,int arr[][100]){
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cout<<arr[i][j]<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int m;
    cout<<"Enter matrix size: ";
    cin>>m;
    int arr[100][100];
    cout<<"ENter Elements: \n ";
    for(int i=0;i<m;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    cout<<"\nMatrix is: \n";
    display(m,arr);
    //Trnaspose and transform
    for(int i=0;i<m;i++){
        for(int j=i+1;j<m;j++){
            int temp=arr[i][j];
            arr[i][j]=arr[j][i];
            arr[j][i]=temp;
        }
    }
    cout<<"The Transpose matrix is: \n";
    display(m,arr);
}