class Solution {
public:
    bool isAnagram(string s, string t) {
        unordered_map<char,int> a;

        if(s.size()!=t.size()) return false;
        for(char c:s){
            a[c]++;
        }
        for(char c:t){
            a[c]--;
            if(a[c]<0){
                return false;
            }
        }
        return true;
    }
};