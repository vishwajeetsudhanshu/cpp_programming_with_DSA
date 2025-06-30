//calculate the sum of elements in the  array
#include<iostream>
using namespace std;
int main(){
  int n;
  cout<<"Enter the size of an array ";
  cin>>n;
  //input array
  int arr[n];
  for(int i=0;i<=n-1;i++){
    cout<<"Enter the elements"<< i <<" of an array "<<endl;
    cin>>arr[i];
  }
  int sum = 0;
  for(int i=0;i<=n-1;i++){
    sum=sum+arr[i];
    
  }
  cout<<"The sum of an array is"<<sum;
}