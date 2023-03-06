class Solution {
public:
        int subtractProductAndSum(int n){
           //p=product,s=sum,r=remainder,n=given number
           int p=1,s=0,r;
           while(n!=0){
               r=n%10;
               p*=r;
               s+=r;
               n=n/10;
           }
           int result=p-s;
           return result;
        }
};
