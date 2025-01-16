class Solution {
public:
    int xorAllNums(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        int temp=0;

        if(n1%2==0 && n2%2==0){
            return 0;
        }
        else if(n1%2==0 && n2%2==1){
            for (int num :nums1){
                temp=temp^num;
            }
        }
        else if(n1%2==1 && n2%2==0){
            for (int num :nums2){
                temp=temp^num;
            }
        }
        else{
            for (int num :nums1){
                temp=temp^num;
            }
            for (int num :nums2){
                temp=temp^num;
            }
        }

        return temp;

    }
};