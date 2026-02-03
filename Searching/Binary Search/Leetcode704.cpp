// class Solution {
// public:
//     int search(vector<int>& nums, int target) {
//         // [-1,0,3,5,9,12], target = 9
//         int lo=0;
//         int hi=nums.size()-1;
//         while(lo<=hi){
//             int mid=lo+(hi-lo)/2;//same eaual to (lo+hi)/2
//             if(nums[mid]==target) return mid;
//             else if(nums[mid]<target)  lo=mid+1;
//             else  hi=mid-1;
            
//         }
//         return -1;
//     }
// };