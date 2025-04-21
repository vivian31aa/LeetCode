class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        numMap={}
        for i in range(len(nums)):
            tmp=target-nums[i]
            if tmp in numMap:
                return [numMap[tmp],i]
            numMap[nums[i]]=i
        return []