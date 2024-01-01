//Problem: https://leetcode.com/problems/assign-cookies/?envType=daily-question&envId=2024-01-01

int findContentChildren(vector<int>& g, vector<int>& s) {
        sort(g.begin(), g.end(),greater<int>());
        sort(s.begin(), s.end(),greater<int>());
        int a=0,ch=0,co=0;
            while (co<s.size() && ch<g.size()) {
                if(g[ch]<=s[co]){
                    a++;co++;ch++;
                }
                else{
                    ch++;
                }
            }
        return a; 
    }
