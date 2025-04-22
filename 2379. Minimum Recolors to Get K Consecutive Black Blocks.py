class Solution:
    def minimumRecolors(self, blocks: str, k: int) -> int:
        n=len(blocks)
        whites=blocks[:k].count('W')
        ans=whites

        for i in range(k,n):
            if blocks[i-k]=='W':
                whites-=1
            if blocks[i]=='W':
                whites+=1
            ans=min(whites,ans)
        return ans
