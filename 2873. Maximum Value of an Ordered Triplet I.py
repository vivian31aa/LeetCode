class Solution:
    def maximumTripletValue(self, nums: List[int]) -> int:
        maxTriplet, maxNum, maxDiff = 0, 0, 0
        for n in nums:
            maxTriplet = max(maxTriplet, maxDiff*n)
            maxDiff= max(maxDiff, maxNum-n)
            maxNum = max(maxNum, n)
        return maxTriplet