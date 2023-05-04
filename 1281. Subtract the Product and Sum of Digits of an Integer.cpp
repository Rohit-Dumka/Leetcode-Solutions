class Solution {
public:
        int subtractProductAndSum(int n){

           //digit=remainder,n=given number
           int product=1,sum=0,digit;
           while(n!=0){
               digit=n%10;
               product*=r;
               sum+=r;
               n=n/10;
           }

           int result=product-sum;

           return result 
        }
};
