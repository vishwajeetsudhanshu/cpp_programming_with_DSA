#include<iostream>
#include<vector>
using namespace std;
int main(){
    int m;
    cout<<"ENter the Rows for the 1st Matrix : ";
    cin>>m;
    int n;
    cout<<"ENter the Columns for the 1st Matrix : ";
    cin>>n;

    int p;
    cout<<"ENter the Rows for the 2nd Matrix : ";
    cin>>p;
    int q;
    cout<<"ENter the Columns for the 2nd Matrix : ";
    cin>>q;
    if(n==p){
        int a[m][n];
        cout<<"ENter the elements for 1st Matrix : ";
        for(int i=0;i<m;i++){
            for(int j=0;j<n;j++){
                cin>>a[i][j];
            }
        }
        cout<<"Enter the elements for 2nd Matrix : ";
        int b[p][q];
        for(int i=0;i<p;i++){
            for(int j=0;j<q;j++){
                cin>>b[i][j];
            }
        }
        //Result of Matrix
        int res[m][q];
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                res[i][j]=0;
                //res[i][j]=a[i][0]*b[0][j]+a[i][1]*b[1][j]......
                for(int k=0;k<p;k++){
                    res[i][j] +=a[i][k]*b[k][j];
                }
            }
        }
        cout<<"The Result of Matrix is : ";
        cout<<endl;
        for(int i=0;i<m;i++){
            for(int j=0;j<q;j++){
                cout<<res[i][j]<<" ";
            }
            cout<<endl;
        }
    }
    else{//n!=p
        cout<<"The Metrices Cannot be multiplied !";
    }

}