class Solution:
    def singleNumber(self, nums: List[int]) -> int:
        # count = defaultdict(int)
        # for num in nums:
        #     count[num]+=1
        # for num, freq in count.items():
        #     if freq==1:
        #         return num
        ans=0
        for num in nums:
            ans ^= num
        return ans