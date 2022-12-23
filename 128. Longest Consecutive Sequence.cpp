class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> nums_set(nums.begin(),nums.end());
        int ans=0,tmp=0;
        for(int i=0;i<nums.size();i++){
            if(nums_set.count(nums[i]-1))   continue;
            tmp=1;
            while(nums_set.count(nums[i]+1)){
                nums[i]++;
                tmp++;
            }
            ans=max(ans,tmp);
        }
        return ans;
    }
};