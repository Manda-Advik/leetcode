class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int maxcount = 0;
        unordered_map<char, int> a;
        int start = 0;
        
        for (int i = 0; i < s.size(); i++) {
            if (a.find(s[i]) != a.end() && a[s[i]] >= start) {
                start = a[s[i]] + 1;
            }
            a[s[i]] = i;
            maxcount = max(maxcount, i - start + 1);
        }
        
        return maxcount;
    }
};