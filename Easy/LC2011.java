class Solution {
    public int finalValueAfterOperations(String[] operations) {
        int ans=0;
        for(int i=0;i<operations.length;i++)
        {
            String s=operations[i];
            switch(s)
            {
                case "++X":
                    ans+=1;
                    break;
                case "X++":
                    ans+=1;
                    break;
                case "X--":
                    ans-=1;
                    break;
                case "--X":
                    ans-=1;
                    break;
            }
        }
        return ans;
    }
}
