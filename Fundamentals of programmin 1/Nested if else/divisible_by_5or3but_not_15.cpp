#include<iostream>
using namespace std;
int main(){
    int x;
    cout<<"Enter a no.";
    cin>>x;
    if(x%3==0 || x%5==0)
    //if((x%3==0 || x%5==)0&& x%15!=0)
    {
        if(x%15!=0){
            cout<<"divisible by 5 or 3 but not 15";
        }
        else{
             cout<<"Not matching condition";
        }
    }
    else{
        cout<<"Not matching condition";
    }
}