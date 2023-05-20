//{ Driver Code Starts
import java.util.*;
class PalindromicArray{
	public static void main(String[] args){
		Scanner sc = new Scanner(System.in);
		int t = sc.nextInt();
		while(t-->0)
		{
			int n = sc.nextInt();
			int[] a = new int[n];
			for(int i = 0 ;i < n; i++)
				a[i]=sc.nextInt();
			GfG g = new GfG();
			System.out.println(g.palinArray(a , n));
		}
	}
}
// } Driver Code Ends


/*Complete the Function below*/
class GfG
{
    static int c(int x)
    {
        int y=x;
        int r=0,s=0;
        while(x>0)
        {
            r=x%10;
            s=s*10+r;
            x=x/10;
        }
        
        if(s==y)
            return 1;
        return 0;
        
    }
	public static int palinArray(int[] a, int n)
           {
               int x=1;
               for(int i=0;i<a.length;i++)
               {
                    x=c(a[i]);
                    if(x==0)
                        return 0;
               }
               return 1;
           }
}