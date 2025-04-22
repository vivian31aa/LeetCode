class Solution:
    def repeatedCharacter(self, s: str) -> str:
        # count = defaultdict(int)
        # for c in s:
        #     count[c]+=1
        #     if count[c]==2:
        #         return c
        seen = set()
        for c in s:
            if c in seen:
                return c
            seen.add(c)  