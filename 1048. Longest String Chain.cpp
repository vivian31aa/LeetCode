class Solution {
public:
    int longestStrChain(vector<string>& words) {
        unordered_map<string, int> dp;
        int chain=1;
        sort(words.begin(),words.end(),[](const string &a, const string &b){return a.size()<b.size();});
        for(int i=0;i<words.size();i++){
            dp[words[i]]=1;
            for(int j=0;j<words[i].size();j++){
                string prev = words[i].substr(0,j) + words[i].substr(j+1);
                if(dp.find(prev)!=dp.end()){
                    dp[words[i]] = dp[prev]+1;
                }
                chain=max(chain,dp[words[i]]);
            }
        }
        return chain;
    }
};