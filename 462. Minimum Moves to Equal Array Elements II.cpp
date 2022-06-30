class Solution {
public:
    int minMoves2(vector<int>& nums) {
        int mid, ans=0;
        sort(nums.begin(),nums.end());
        mid=nums[round(nums.size()/2)];
        for(int i=0;i<nums.size();i++){
            ans+=abs(nums[i]-mid);
        }
        return ans;
    }
};