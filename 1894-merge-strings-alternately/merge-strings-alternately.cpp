class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int p1=0;
        int p2=0;
        int n= word1.size()+word2.size();
        string a="";
        for(int i=0;i<n;i++){
            if(p1<word1.size() && p2<word2.size()){
                if(a.size()%2==0){
                    a=a+word1[p1];
                    p1++;
                }
                else{
                    a=a+word2[p2];
                    p2++;
                }
            }
            else if(p1==word1.size()&& p2<word2.size()){
                a=a+word2[p2];
                p2++;
            }
            else{
                a=a+word1[p1];
                p1++;
            }
        }
        return a;
    }
};