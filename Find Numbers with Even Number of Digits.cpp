class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int digits=0,ans=0;
        for(int i=0;i<nums.size();i++){
            while(nums[i]>0){
                nums[i]/=10;
                digits++;
            }
            if(digits%2==0) ans++;
            digits=0;
        }
        return ans;
    }
};