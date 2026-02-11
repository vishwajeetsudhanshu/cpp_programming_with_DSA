//Make a fun which calculates the factorial of n using recursion
#include<iostream>
using namespace std;
int fact(int n){
    if(n==1 || n==0) return 1;
    return n*fact(n-1);
}
int main(){
    int x;
    cout<<"ENter a no: ";
    cin>>x;
    cout<<fact(x);
}
/*
#include<iostream>
using namespace std;

int fact(int n){
    if(n == 0 || n == 1)
        return 1;

    return n * fact(n-1);
}

void printFact(int n){
    if(n == 0)
        return;

    printFact(n-1);   // first go till 1
    cout << n << "! = " << fact(n) << endl;
}

int main(){
    int x;
    cout<<"Upto Which no. you want to factorial: ";
    cin>>x;

    printFact(x);
}

*/