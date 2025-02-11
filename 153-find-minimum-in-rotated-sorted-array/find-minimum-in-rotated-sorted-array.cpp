class Solution {
public:
    int findMin(vector<int>& nums) {
        int n=nums.size();
        int l=0;
        int r=n-1;
        int m=0;
        while(l<=r){
            m=l+(r-l)/2;

            if(nums[m]>nums[r]){
                l=m+1;
            }else if(nums[m]<nums[r]){
                r=m;
            }
            else{
                return nums[m];
            }
        }
        return nums[l];
    }
};