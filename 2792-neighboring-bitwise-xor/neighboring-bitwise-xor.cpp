class Solution {
public:
    bool doesValidArrayExist(vector<int>& derived) {
        int res=0;
        for (int n:derived){
            res=res^n;
        }
        if(res==0){
            return true;
        }
        else
        return false;
    }
};