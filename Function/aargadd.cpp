#include<iostream>
using namespace std;
void fun(int x,int y){
    cout<<"add of fun x"<<&x<<endl;
    cout<<"add of funy"<<&y<<endl;

}
int main(){
    int x=3;
    int y=7;
    cout<<"add of main x"<<&x<<endl;
    cout<<"add of main y"<<&y<<endl;
    fun(x,y);
}