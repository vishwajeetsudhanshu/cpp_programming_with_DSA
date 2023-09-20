#include<iostream>
using namespace std;
int main(){
    bool p=false;
    bool q=false;
    bool r=true;
    cout<<(p==q==r)<<endl;
    int a=1;
    int b=2;
    int c=2;
    cout<<(a==b==c)<<endl;
    cout<<(a==(b==c));
    return 0;
}
//opertor always operate from left to right if the operator is same