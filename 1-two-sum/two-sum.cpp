class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map<int,int> a;
        int n=nums.size();
        
        for(int i=0;i<n;i++){
            int comp=target-nums[i];
            if(a.count(comp)){
                return {a[comp],i};
            }
            a[nums[i]]=i;
        }
        return {};
    }
};