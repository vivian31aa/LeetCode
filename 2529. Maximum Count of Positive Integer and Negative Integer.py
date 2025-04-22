class Solution:
    def maximumCount(self, nums: List[int]) -> int:
        # pos,neg=0,0
        # for i in nums:
        #     if i > 0:
        #         pos+=1
        #     elif i < 0:
        #         neg+=1
        # return max(pos,neg)
        neg=bisect.bisect_left(nums,0)
        pos=len(nums)-bisect.bisect_right(nums,0)
        return max(neg,pos)