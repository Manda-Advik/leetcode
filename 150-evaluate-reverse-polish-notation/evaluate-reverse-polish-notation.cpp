class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> a;

        for(int i=0;i<tokens.size();i++){
            if(tokens[i]!="+" &&tokens[i]!="-" && tokens[i]!="*" && tokens[i]!="/"){
                a.push(stoi(tokens[i]));
            }
            else{
                int b=a.top();
                a.pop();
                int c=a.top();
                a.pop();
                if(tokens[i]=="+"){
                    a.push(b+c);
                }
                if(tokens[i]=="*"){
                    a.push(b*c);
                }if(tokens[i]=="-"){
                    a.push(c-b);
                }if(tokens[i]=="/"){
                    a.push( c/b);
                }
            }
        }
        return a.top();
    }
};