//Print 1 to N
//Using ExtraParameter
#include<iostream>
using namespace std;
void print(int i,int n){
    //base case
    if(i>n) return;
    cout<<i<<endl;
    print(i+1,n);
    
}
int main(){
    int x;
    cout<<"ENter a no: ";
    cin>>x;
    print(1,x);
}