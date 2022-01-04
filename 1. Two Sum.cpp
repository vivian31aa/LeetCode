class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int> ans;
        unordered_map<int,int> table;
        for(int i=0;i<nums.size();i++){
            if(table[target-nums[i]]){
                ans.push_back(table[target-nums[i]]-1);
                ans.push_back(i);
            }
            table[nums[i]]=i+1;
        }
        return ans;
    }
};