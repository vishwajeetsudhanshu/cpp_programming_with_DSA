#include<iostream>
using namespace std;
int main()
{
    float x1,y1,x2,y2,x3,y3,slope1,slope2;
    cout<<"Enter the points(x1andy1)";
    cin>>x1>>y1;
    cout<<"Enter the points(x2andy2)";
    cin>>x2>>y2;
    cout<<"Enter the points(x3andy3)";
    cin>>x3>>y3;
    slope1=(y2-y1)/(x2-x1);
    slope2=(y3-y2)/(x3-x2);
    if(slope1==slope2){
        cout<<"All 3 points lies on the same line";

    }
    else{
        cout<<"All 3 points lies don'ton the same line";
    }


}