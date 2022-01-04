class Solution {
public:
    int maxSubArray(vector<int>& nums) {
       int tmp=0,max=INT_MIN;
        for(int i=0;i<nums.size();i++){
            tmp+=nums[i];
            if(tmp>max) max=tmp;
            if(tmp<0)   tmp=0;
        }
        return max;
    }
};