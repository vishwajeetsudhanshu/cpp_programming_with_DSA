#include<iostream>
#include<cmath>
using namespace std;
int main(){
    int n;
    cout<<"Enter n: ";
    cin>>n;
    int nfact=1;
    for(int i=2;i<=n;i++){
        nfact=nfact*i;
    }
    cout<<nfact;
    cout<<endl;
    int r;
    cout<<"Enter r: ";
    cin>>r;
    int rfact=1;
    for(int i=2;i<=r;i++){
        rfact=rfact*i;
    }
    cout<<rfact;
    cout<<endl;
    int nrfact=1;//(n-r)!
    for(int i=2;i<=n-r;i++){
        nrfact*=i;
    }
    cout<<nrfact;
    cout<<endl;
    int ncr=nfact/(rfact*nrfact);
    cout<<ncr;

}