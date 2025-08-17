//find the doublet in the array whose sum is equal to the given value x;
#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;
int main(){
    int x;
    cout<<"Enter the target: ";
    cin>>x;
    vector<int> v;
    int n;
    cout<<"Enter the zise of an array : ";
    cin>>n;
    cout<<"Enter the lements of an array: ";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q);
    }
    for(int i=0;i<=n-2;i++){
        for(int j=i+1;j<=n-1;j++){
            if(v[i]+v[j]==x){
                cout<<"("<<i<<","<<j<<")"<<endl;
            }
        }
    }
}

// class Solution {
// public:
//     vector<int> twoSum(vector<int>& nums, int target) {
//         for (int i = 0; i < nums.size() - 1; i++) {
//             for (int j = i + 1; j < nums.size(); j++) {
//                 if (nums[i] + nums[j] == target) {
//                     return {i, j};  // Return the indices
//                 }
//             }
//         }
//         return {};  // Return empty if no solution found (to satisfy return type)
//     }
// };
