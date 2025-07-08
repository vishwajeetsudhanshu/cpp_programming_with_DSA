 //given  a sentence and return the word that is occuring most number of times in that sentence
 #include<iostream>
 #include<vector>
 #include<string>
 #include<sstream>
 #include<algorithm>
 using namespace std;
 int main(){
    string str;
    cout<<"Enter the Sentence: ";
    getline(cin,str);
    stringstream ss(str);
    string temp;
    vector <string> v;
    while(ss>>temp){
        // cout<<temp<<endl;
        v.push_back(temp);
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    cout<<endl;
    sort(v.begin(),v.end());
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<endl;
    }
    int mx=0;
    int count=0;
    for(int i=1;i<v.size();i++){
        if(v[i]==v[i-1]) count++;
        else count=1;
        mx=max(mx,count);
    }
    cout<<mx;

 }