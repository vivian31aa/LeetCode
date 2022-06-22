class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        priority_queue<int> sort;
        for(int i=0;i<nums.size();i++)  sort.push(nums[i]);
        for(int i=0;i<k-1;i++)    sort.pop();
        return sort.top();
    }
};