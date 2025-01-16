class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> a;
        int target=0;
        int l=0;
        int r=0;
        sort(nums.begin(),nums.end());

        for(int i=0;i<nums.size()-2;i++){

            if (i > 0 && nums[i] == nums[i - 1]) continue;
            target=-nums[i];
            l=i+1;
            r=nums.size()-1;
            while(l<r){

                if(nums[l]+nums[r]>target){
                    r--;
                }
                else if(nums[l]+nums[r]<target){
                    l++;
                }
                else{
                    a.push_back({nums[i],nums[l],nums[r]});
                    while (l < r && nums[l] == nums[l + 1]) l++;
                    while (l < r && nums[r] == nums[r - 1]) r--;

                    l++;
                    r--;
                }
            }
        }
        return a;
    }
};