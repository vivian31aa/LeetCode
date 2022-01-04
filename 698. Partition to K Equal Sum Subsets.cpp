class Solution {
public:
    
     bool canPartitionKSubsets(vector<int> &nums, int k)
    {
        int ans[k];
         memset(ans, 0, k*sizeof(int));
         int sum = 0;
        for (int i = 0; i < nums.size(); i++)
            sum += nums[i];
        if (sum % k != 0 || sum == 0)
            return false;
        int goal = sum / k;
        sort(nums.begin(), nums.end());
        int index = nums.size() - 1;
        if (nums[index]>goal)
            return false;
        while (nums[index] == goal && index > 0)
        {
            index--;
            k--;
        }
        
        return partition(ans, nums, index, k, goal);
    }
    bool partition(int *ans, vector<int> &nums, int index, int k, int goal)
    {
        if (index < 0)
            return true;
        
        for (int i = 0; i < k; i++)
        {
            int select=nums[index];
            if (ans[i] + select <= goal)
            {
                ans[i] += select;
                //cout<<i<<" "<<ans[i]<<endl;
                if (partition(ans, nums, index - 1, k, goal))
                {
                    return true;
                }
                ans[i] -= select;
            }
        }
        return false;
    }
};