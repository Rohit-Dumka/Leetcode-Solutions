class Solution {
public:
    string removeOuterParentheses(string s) {
        int openCount=0,closeCount=0;
        string ans="";
        int j=0;
        
        for(int i=0;i<s.size();i++){
            if(s[i]=='(')
                openCount++;
            else
                closeCount++;
            if(openCount==closeCount){
                ans+=s.substr(j+1,i-j-1);
                j=i+1;
            }
        }
        return ans;
    }
};