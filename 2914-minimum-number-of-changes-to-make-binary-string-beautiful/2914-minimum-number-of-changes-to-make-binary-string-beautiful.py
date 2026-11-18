class Solution:
    def minChanges(self, s: str) -> int:
        n = len(s)
        change = 0
        prev = s[0]
        cnt =0
        for currch in s:
            if prev == currch:
                cnt+=1
                continue
            if not (cnt&1):
                cnt =1
            else:
                change+=1
                cnt=0
            prev = currch
        return change