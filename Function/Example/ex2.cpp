#include<iostream>
#include<cmath>
using namespace std;
int fact(int x){
    int f=1;
    for(int i=2;i<=x;i++){
        f=f*i;
    }
    return f;
}
int combination(int n,int r){
    int ncr=fact(n)/(fact(r)*fact(n-r));
    return ncr;
}
int permutation(int n,int r){
    int npr=fact(n)/fact(n-r); 
}
int main(){
    int n,r;
    cout<<"Enter the values of n and r : ";
    cin>>n>>r;
    // int nfact=fact(n);
    // int rfact=fact(r);
    // int nrfact=fact(n-r);
    int ncr=combination(n,r);
    int npr=permutation(n,r);
    cout<<"Combination is "<<ncr<<" And Permutation is "<<npr;
    

}