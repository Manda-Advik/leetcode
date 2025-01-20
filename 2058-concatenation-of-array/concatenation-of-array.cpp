class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector<int> a(2*nums.size());
        for(int i=0;i<nums.size();i++){
            a[i]=nums[i];
            a[i+nums.size()]=nums[i];
        }
        return a;
    }
};