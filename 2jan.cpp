//Problem: https://leetcode.com/problems/convert-an-array-into-a-2d-array-with-conditions/description/?envType=daily-question&envId=2024-01-02

vector<vector<int>> findMatrix(vector<int>& nums) {
        unordered_map<int,int>f;
        for(auto i:nums)
            ++f[i];
        int size=0;
        for(auto i:f)
            size=max(size,i.second);
        vector<vector<int>> v(size);
        for(auto i:f){
            for(int j=0;j<i.second;j++){
                v[j].push_back(i.first);
            }
        }
        return v;
    }
