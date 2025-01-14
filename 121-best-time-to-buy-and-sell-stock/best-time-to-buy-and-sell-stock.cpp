class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int bestbuy=prices[0];
        int diff=0;
        int maxdiff=0;

        for (int i=0;i<prices.size();i++){
            diff=prices[i]-bestbuy;
            if (diff<=0){
                bestbuy=prices[i];
            }
            if(diff>maxdiff){
                maxdiff=diff;
            }
        }
        return maxdiff;

    }
};