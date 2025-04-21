class Solution:
    def countKDifference(self, nums: List[int], k: int) -> int:
        # ans=0
        # for i in range(len(nums)):
        #     for j in range(i+1,len(nums)):
        #         if abs(nums[i]-nums[j]) == k:
        #             ans+=1
        # return ans
        ans=0
        count=defaultdict(int)
        for num in nums:
            ans+= count[num+k] + count[num-k]
            count[num]+=1
        return ans