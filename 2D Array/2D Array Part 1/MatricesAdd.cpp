<<<<<<< HEAD
//Addition and multiplication of two matrices and for addition order should be same of matrix
#include<iostream>
using namespace std;
int main(){
    int a[2][3]={1,2,3,4,5,6};
    int b[2][3]={{7,8,9},{10,11,12}};
    // int res[2][3];
    // cout<<"The addition of two matrices is: "<<endl;
    // for(int i=0;i<2;i++){
    //     for (int j=0;j<3;j++){
    //         res [i][j]=a[i][j]*b[i][j];
    //         cout<<res[i][j]<<" ";
    //     }
    //     cout<<endl;
    //
    // cout<<"The addition of two matrices is: "<<endl;
    // for(int i=0;i<2;i++){
    //     for (int j=0;j<3;j++){
    //         cout<<a[i][j]*b[i][j]<<" ";
            
    //     }
    //     cout<<endl;
    // }
    cout<<"The addition of two matrices is: "<<endl;
    for(int i=0;i<2;i++){
        for (int j=0;j<3;j++){
            b[i][j]=a[i][j]*b[i][j];
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
=======
//Addition and multiplication of two matrices and for addition order should be same of matrix
#include<iostream>
using namespace std;
int main(){
    int a[2][3]={1,2,3,4,5,6};
    int b[2][3]={{7,8,9},{10,11,12}};
    // int res[2][3];
    // cout<<"The addition of two matrices is: "<<endl;
    // for(int i=0;i<2;i++){
    //     for (int j=0;j<3;j++){
    //         res [i][j]=a[i][j]*b[i][j];
    //         cout<<res[i][j]<<" ";
    //     }
    //     cout<<endl;
    //
    // cout<<"The addition of two matrices is: "<<endl;
    // for(int i=0;i<2;i++){
    //     for (int j=0;j<3;j++){
    //         cout<<a[i][j]*b[i][j]<<" ";
            
    //     }
    //     cout<<endl;
    // }
    cout<<"The addition of two matrices is: "<<endl;
    for(int i=0;i<2;i++){
        for (int j=0;j<3;j++){
            b[i][j]=a[i][j]*b[i][j];
            cout<<b[i][j]<<" ";
        }
        cout<<endl;
    }
>>>>>>> e835a1e610f77912e72b691c605af25c14b3609f
}