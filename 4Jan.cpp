//Problem: https://leetcode.com/problems/minimum-number-of-operations-to-make-array-empty/description/?envType=daily-question&envId=2024-01-04
//Topic: unordered map frequency

int minOperations(vector<int>& nums) {
        unordered_map<int,int>f;
        int ans=0;
        for(auto i:nums)
            ++f[i];
        for(auto i:f){
            if(i.second%3==0)
            ans+=i.second/3;
            else if(i.second%3==2){
            ++ans;
            ans+=(i.second-2)/3;
            }
            else{
            if(i.second==1)
            return -1;
            
            ans+=2;
            ans+=(i.second-4)/3;
            }
        }
        return ans;
    }
