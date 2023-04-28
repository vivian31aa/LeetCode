class Solution {
public:
    int singleNonDuplicate(vector<int>& nums) {
        int i=0;
        if (nums.size()==1){
            return nums[0];
        }
        for(i=0;i<nums.size();i++){
            if(nums[i]==nums[i+1]){
                i++;
            }
            else{
                break;
            }
        }
        return nums[i];
    }
};