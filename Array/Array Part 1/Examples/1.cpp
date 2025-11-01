#include<iostream>
using namespace std;
int main(){
    // int marks[5]={8,35,9,7,85};
    // for(int i=0;i<5;i++){
    //     if (marks[i]<35){
    //         cout<<i<<" ";
    //     }
    // }
    int std;
    cout<<"Enter the no of students: ";
    cin>>std;
    int marks[std];
    cout<<"Enter the Marks";
    for(int i=0;i<std;i++){
        cin>>marks[i];
    
    };
    cout<<"Less than 35: ";
    for(int i=0;i<std;i++){
        if(marks[i]<35){
            cout<<i<<" ";
        }
    }
    


    

}

