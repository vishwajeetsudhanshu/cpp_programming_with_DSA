//find out the remainder when a>b
#include<iostream>
using namespace  std;
int main(){
    int a=16; //a is dividend
    int b=3; //b is divisor
    int q=a/b; //q is quotient
    int r=a-(b*q);
    cout<<r; 
    return 0;
    

}
//dividend=divisor *quotient+remainder
//you can also use modulus operator(%)