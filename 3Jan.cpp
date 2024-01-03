//Problem: https://leetcode.com/problems/number-of-laser-beams-in-a-bank/?envType=daily-question&envId=2024-01-03

int numberOfBeams(vector<string>& bank) {
        int ans=0,next=0;
        for(int i=bank.size()-1;i>-1;i--){
            int count=0;
            for( auto j: bank[i]){
                if(j=='1'){
                    count++;
                    ans+=next;
                }
            }
            next=count>0 ? count : next;
        }
        return ans;
    }
