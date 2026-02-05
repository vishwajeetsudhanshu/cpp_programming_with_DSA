// //k closet elements
// class Solution {
// public:
//     vector<int> findClosestElements(vector<int>& arr, int k, int x) {
//         //s.c=O(k)
//         //T.C=O(logn + klogk)
//         int n=arr.size();
//         vector<int> ans(k);//k elements ko insert krunga
//         if(x<arr[0]){
//             for(int i=0;i<k;i++){
//                 ans[i]=arr[i];
//             }
//             return ans;
//         }
//         //1 2 3 4 5  x=7 k=3
//         if(x>arr[n-1]){
//             int i=n-1;
//             int j=k-1;
//             while(j>=0){
//                 ans[j]=arr[i];
//                 j--;
//                 i--;
//             }
//             return ans;
//         }
//         int lo=0;
//         int hi=n-1;
//         int t=0;//representing the current ind of ans
//         bool flag=false;// if x is present or not
//         int mid=-1;
//         //binary search
//         while(lo<=hi){
//             mid=lo+(hi-lo)/2;
//             if(arr[mid]==x){
//                 flag=true;//present
//                 ans[t]=arr[mid];
//                 t++;
//                 break;
//             }
//             else if(arr[mid]>x) hi=mid-1;
//             else lo=mid+1;
//         }
//         int lb=hi;//arr[hi];
//         int ub=lo;//arr[lo];
//         if(flag==true){
//             lb=mid-1;
//             ub=mid+1;
//         }
//         while(t<k && lb>=0 && ub<=n-1){
//             int dif1= abs(x-arr[lb]);//difference
//             int dif2=abs(x-arr[ub]);
//             if(dif1<=dif2){
//                 ans[t]=arr[lb];
//                 lb--;
//             }
//             else{
//                 //dif1<dif2
//                 ans[t]=arr[ub];
//                 ub++;
//             }
//             t++;
//         }
//         if(lb<0){
//             while(t<k){
//                 ans[t]=arr[ub];
//                 ub++;
//                 t++;
//             }
//         }
//         if(ub>n-1);{
//             while(t<k){
//                 ans[t]=arr[lb];
//                 lb--;
//                 t++;
//             }
//         }
//         sort(ans.begin(),ans.end());//O(klogk)
//         return ans;
//     }
    
// };