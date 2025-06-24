class Solution:
    def isPalindrome(self, s: str) -> bool:
        s=''.join(a.lower() for a in s if a.isalnum())
        left=0
        r=len(s)-1
        while left<r:
            if s[left]!=s[r]:
                return False
            left+=1
            r-=1
            
        return True