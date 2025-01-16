class Solution {
public:
    int maxArea(vector<int>& height) {
        int l=0;
        int r=height.size()-1;
        int max=0;
        int area=0;
        while(l<r){
            area=min(height[l],height[r])*(r-l);
            if(height[l]<height[r]){
                l++;
            }
            else{
                r--;
            }
            if (max<area){
                max=area;
            }
        }
        return max;
    }
};