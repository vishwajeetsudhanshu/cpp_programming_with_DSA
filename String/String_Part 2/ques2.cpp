<<<<<<< HEAD
//Given two string s and t ,return true if t is an anagram of s and false otherwise
//anagram means arrange the two words with same character ie abc and cba is an anagram 
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s="physicshallah";
    string t="wallahphysics";
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    cout<<"After Sorting"<<endl;
    cout<<s<< "and"<<" "<<t<<endl;
    if(s==t){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

}
=======
//Given two string s and t ,return true if t is an anagram of s and false otherwise
//anagram means arrange the two words with same character ie abc and cba is an anagram 
#include<iostream>
#include<string>
#include<algorithm>
using namespace std;
int main(){
    string s="physicshallah";
    string t="wallahphysics";
    sort(s.begin(),s.end());
    sort(t.begin(),t.end());
    cout<<"After Sorting"<<endl;
    cout<<s<< "and"<<" "<<t<<endl;
    if(s==t){
        cout<<"True";
    }
    else{
        cout<<"False";
    }

}
>>>>>>> e835a1e610f77912e72b691c605af25c14b3609f
