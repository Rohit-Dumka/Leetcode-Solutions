//{ Driver Code Starts
#include<iostream>
using namespace std;
int num(int a[], int n, int k);
int main()
{
	int t;
	cin>>t;
	while(t--)
	{
		int n;
		cin>>n;
		int a[n];
		for(int i = 0; i < n; i++)
		{
			cin>>a[i];
		}
		int k;
		cin>>k;
		cout<<num(a,n,k)<<endl;
	}
}
// } Driver Code Ends


/*Complete the function given below*/
int count(int a,int *c,int k)
{
    int x;
    while(a>0)
    {
        x=a%10;
        if(x==k)
            (*c)++;
        a=a/10;
    }
    
}
int num(int a[], int n, int k)
{
    int c=0;
     for(int i=0;i<n;i++)
     {
        count(a[i],&c,k);
     }
     return c;
}