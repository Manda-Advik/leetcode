class Solution:
    def merge(self, nums1: List[int], m: int, nums2: List[int], n: int) -> None:
        """
        Do not return anything, modify nums1 in-place instead.
        """
        mindx=m-1
        nindx=n-1
        r=m+n-1

        while nindx>=0:
            if mindx>=0 and nums1[mindx]>nums2[nindx]:
                nums1[r]=nums1[mindx]
                mindx-=1
            else:
                nums1[r]=nums2[nindx]
                nindx-=1
            r-=1



        