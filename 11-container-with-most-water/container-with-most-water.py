class Solution:
    def maxArea(self, height: List[int]) -> int:
        i=0
        j=len(height)-1
        most=-inf
        while i<j:
            curr=(j-i)*(min(height[i],height[j]))
            most=max(curr,most)
            
            if height[i]<height[j]:
                i+=1
            else:
                j-=1

        return most


