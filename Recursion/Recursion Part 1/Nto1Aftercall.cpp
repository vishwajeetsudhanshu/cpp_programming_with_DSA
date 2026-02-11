#include<iostream>
using namespace std;
void print(int n){
    //base case
    if(n==0) return;
    print(n-1); //call
    cout<<n<<endl;//kaam
}
int main(){
    int x;
    cout<<"ENter a no: ";
    cin>>x;
    print(x);
}