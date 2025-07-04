class Solution:
    def minSubArrayLen(self, target: int, nums: List[int]) -> int:
        min_len=float("inf")
    
        l=0
        cursum=0

        for r in range(len(nums)):
            cursum +=nums[r]

            while cursum>=target:
                if r-l +1 <min_len:
                    min_len=r-l+1
                cursum=cursum-nums[l]
                l+=1
            
        return min_len if min_len != float("inf") else 0
                
