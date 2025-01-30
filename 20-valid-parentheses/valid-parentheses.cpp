class Solution {
public:
    bool isValid(string s) {
        stack<char> stk;
        unordered_map<char, char> mapping = {{')', '('}, {']', '['}, {'}', '{'}};

        for(char a:s){
            if(mapping.find(a)==mapping.end()){
                stk.push(a);
            }
            else if(!stk.empty() && mapping[a] ==stk.top()){
                stk.pop();
            }
            else{
                return false;
            }
        }
        return stk.empty();
    }
};