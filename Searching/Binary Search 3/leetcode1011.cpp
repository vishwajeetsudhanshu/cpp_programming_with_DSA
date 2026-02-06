class Solution {
public:
    bool check(int mid,vector<int>&weights,int days){
        //3,2,2,4,1,4  days=3 mid=5
        int n=weights.size();
        int m=mid;//denoting current capacity
        int count=1;//No of days to complete
        for(int i=0;i<n;i++){
            if(m>=weights[i]){
                m=m-weights[i];
            }
            else{
                count++;
                m=mid;//denoting current capacity of day
                m=m-weights[i];
            }
        }
        if(count>days) return false;
        else return true;
    }
    int shipWithinDays(vector<int>& weights, int days) {
        int n=weights.size();
        int max=INT_MIN;
        int sum=0;
        for(int i=0;i<n;i++){
            if(max<weights[i]) max=weights[i];
            sum=sum+weights[i];
        }
        int lo=max;
        int hi=sum;
        int min_cap=sum;
        while(lo<=hi){
            int mid=lo+(hi-lo)/2;
            if(check(mid,weights,days)){
                min_cap=mid;
                hi=mid-1;
            }
            else lo=mid+1;
        }
        return min_cap;
    }
};
T.c---0(n*log(sum-max))