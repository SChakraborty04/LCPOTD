//Problem: https://leetcode.com/problems/longest-increasing-subsequence/submissions/?envType=daily-question&envId=2024-01-05

int lengthOfLIS(vector<int>& nums) {
        int n=nums.size();
        vector<int>v(n,1e5);
        for(int i=0;i<n;i++){
            int p=lower_bound(v.begin(),v.end(),nums[i])-v.begin();
            if(p<n){
                v[p]=min(v[p],nums[i]);
            }
        }
        for(int i=n-1;i>-1;i--){
            if(v[i]<1e5)
            return i+1;
        }
        return 0;
    }
    //Longer way
    // int lengthOfLIS(vector<int>& nums) {
    //     int n=nums.size();
    //     int dp[n];
    //     dp[0]=1;
    //     for(int i=1;i<n;i++){
    //         dp[i]=1;
    //         for(int j=0;j<i;j++){
    //             if(nums[j]<nums[i])
    //             dp[i]=max(dp[i],dp[j]+1);
    //         }
    //     }
    //     return *max_element(dp,dp+n);
    // }
