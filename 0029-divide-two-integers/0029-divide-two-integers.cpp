class Solution {
public:
    int divide(int dividend, int divisor) {
        long long ans=divisor;
        int flag=0;
        ans=dividend/ans;
        if(ans>INT_MAX) 
            return INT_MAX;
        return (int)ans;
    }
};