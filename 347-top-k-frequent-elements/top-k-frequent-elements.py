class Solution:
    def topKFrequent(self, nums: List[int], k: int) -> List[int]:
        a=defaultdict(int)
        for num in nums:
            a[num]+=1

        sorted_nums = sorted(a, key=lambda x: a[x], reverse=True)
    
        return sorted_nums[:k]
        
        