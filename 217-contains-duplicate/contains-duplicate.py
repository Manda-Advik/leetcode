class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        result={}
        for num in nums:
            if num in result and result[num]>=1:
                return True
            result[num]=result.get(num,0)+1
        return False
                    