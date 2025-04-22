class Solution:
    def countSymmetricIntegers(self, low: int, high: int) -> int:
        ans=0
        for i in range(low,high+1):
            s=str(i)
            n=len(s)
            if n%2 == 1:
                continue
            half=n//2
            leftsum=sum(int(s[i]) for i in range(half))
            rightsum=sum(int(s[i]) for i in range(half,n))
            if leftsum == rightsum:
                ans+=1
        return ans