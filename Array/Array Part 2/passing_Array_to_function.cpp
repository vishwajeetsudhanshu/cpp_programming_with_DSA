#include<iostream>
using namespace std;
void display(int a[],int size){ //a is an arr inta[]=*a
    for(int i =0;i<=size-1;i++){
        cout<<a[i]<<" " ;
    }
    cout<<endl;
    return ;
}
void change(int b[],int size){//b is an arr
    b[0]=100;
}
int main(){
    int arr[]={1,4,5,2,46};
    int size=sizeof(arr)/sizeof(arr[0]);
    cout<<size<<endl;
    display(arr,size);
    change(arr,size);
    display(arr,size);

}