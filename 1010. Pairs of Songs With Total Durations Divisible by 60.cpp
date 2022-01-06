class Solution {
public:
    int numPairsDivisibleBy60(vector<int>& time) {
        vector<int> c(65,0);
        int ans=0;
        for(int i=0;i<time.size();i++){
            time[i]%=60;
            ans+=c[(60-time[i])%60];
            c[time[i]]++;
        }
        return ans;
    }
};