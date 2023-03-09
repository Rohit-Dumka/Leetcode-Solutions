class Solution {
public:
        int subtractProductAndSum(int n){

           //prod=product,sum=sum,digit=remainder,n=given number
           int prod=1,sum=0,digit;

           while(n!=0){
               digit=n%10;
               prod*=r;
               sum+=r;
               n=n/10;
           }

           int result=prod-sum;

           return result 
        }
};
