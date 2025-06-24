class Solution:
    def validPalindrome(self, s: str) -> bool:
        def pal(s,l,r):
            while l<r:
                if s[l]!=s[r]:
                    return False
                l+=1
                r-=1
            return True 

        
        l=0
        r=len(s)-1

        while l<r:
            if s[l]==s[r]:
                l+=1
                r-=1
            else:
                return pal(s,l+1,r) or pal(s,l,r-1)
        return True