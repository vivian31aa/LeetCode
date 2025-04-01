class Solution:
    def maximumWealth(self, accounts: List[List[int]]) -> int:
        # total=0
        # ans=0
        # for account in accounts:
        #     total=sum(account)
        #     if(ans<total):
        #         ans=total
        #         total=0
        # return ans
        return max(sum(account) for account in accounts)