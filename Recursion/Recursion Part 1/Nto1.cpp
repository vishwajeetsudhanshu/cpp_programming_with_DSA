#include<iostream>
using namespace std;
void print(int n){
    //base case
    if(n==0) return;
    cout<<n<<endl;//kaam
    print(n-1); //call
}
int main(){
    int x;
    cout<<"ENter a no: ";
    cin>>x;
    print(x);
}