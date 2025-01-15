class Solution {
public:
    int maxProduct(vector<int>& nums) {
        int maxprod=1;
        int minprod=1;
        int a=nums[0];

        for(int num :nums){
            if(num<0){
                swap(maxprod,minprod);
            }

            maxprod=max(maxprod*num,num);
            minprod=min(minprod*num,num);

            a=max(maxprod,a);
        }

        return a;
    }
};