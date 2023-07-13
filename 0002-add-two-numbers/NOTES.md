if(d<10)
{
d=nxt + sum%10;
nxt=0;
}
d=sum%10;
sum=sum/10;
if (sum>0)
nxt=sum;
ans->val=d;