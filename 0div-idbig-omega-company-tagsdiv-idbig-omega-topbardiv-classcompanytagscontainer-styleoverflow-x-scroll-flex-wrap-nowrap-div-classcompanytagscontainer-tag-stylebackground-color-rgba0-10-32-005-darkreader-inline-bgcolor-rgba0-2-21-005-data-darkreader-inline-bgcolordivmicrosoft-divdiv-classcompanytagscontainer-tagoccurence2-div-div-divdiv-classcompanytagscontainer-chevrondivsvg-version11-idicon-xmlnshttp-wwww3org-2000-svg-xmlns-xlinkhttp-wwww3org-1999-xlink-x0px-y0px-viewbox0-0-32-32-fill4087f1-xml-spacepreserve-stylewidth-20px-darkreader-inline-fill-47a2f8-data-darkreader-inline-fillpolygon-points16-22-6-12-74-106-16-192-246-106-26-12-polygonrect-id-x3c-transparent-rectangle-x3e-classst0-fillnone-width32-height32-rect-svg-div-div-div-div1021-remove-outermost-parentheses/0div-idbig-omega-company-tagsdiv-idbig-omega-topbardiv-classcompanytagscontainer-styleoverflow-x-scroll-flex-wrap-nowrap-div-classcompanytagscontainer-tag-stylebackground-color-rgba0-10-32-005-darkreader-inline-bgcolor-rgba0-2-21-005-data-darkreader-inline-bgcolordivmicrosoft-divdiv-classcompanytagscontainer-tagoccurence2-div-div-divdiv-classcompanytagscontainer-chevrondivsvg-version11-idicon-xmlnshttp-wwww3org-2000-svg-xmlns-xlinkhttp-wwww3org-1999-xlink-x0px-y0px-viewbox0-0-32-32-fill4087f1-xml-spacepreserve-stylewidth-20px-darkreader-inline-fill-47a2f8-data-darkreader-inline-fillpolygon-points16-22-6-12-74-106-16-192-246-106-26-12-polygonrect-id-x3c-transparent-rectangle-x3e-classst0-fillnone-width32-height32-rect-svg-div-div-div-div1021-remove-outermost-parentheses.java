class Solution {
    public String removeOuterParentheses(String s) {
        int openCount=0,closeCount=0;
        String ans="";
        int j=0;
        
        for(int i=0;i<s.length();i++){
            if(s.charAt(i)=='(')
                openCount++;
            else
                closeCount++;
            if(openCount==closeCount){
                ans+=s.substring(j+1,i);
                j=i+1;
            }
        }
        return ans;
    }
}