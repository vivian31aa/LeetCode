class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        // vector<int> wealth(accounts.size());
        // int max=0;
        // for(int i=0;i<accounts.size();i++){
        //     for(int j=0;j<accounts[0].size();j++){
        //         sum+=accounts[i][j];
        //     }
        //     wealth[i]=sum;
        //     sum=0;
        // }

        // int max=wealth[0];
        // for(int i=0;i<wealth.size();i++){
        //     if(wealth[i]>max){
        //         max=wealth[i];
        //     }
        // }
        // return max;

        int ans=0;
        for(int i=0;i<accounts.size();i++){
            int wealth=accumulate(accounts[i].begin(),accounts[i].end(),0);
            ans=max(ans,wealth);
        }
        return ans;
    }
};