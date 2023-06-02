//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;
class GfG
{
    public static void main (String[] args)
    {
        
        Scanner sc = new Scanner(System.in);
        int t = sc.nextInt();
        
        while(t-- > 0)
        {
            String s = sc.next ();
    		int[] res = new Sol().count (s);
    		
    		for (int i = 0; i < 4; i++)
    		    System.out.println (res[i]);
        }
        
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends


//User function Template for Java

class Sol
{
    int[] count (String s)
    {
        String spchar="!#$%&'()*+,-./:;<=>?@[]^_`{|}~0123456789";

        int[] ans=new int[4];
        for(int i=0;i<s.length();i++)
        {
            if(Character.isUpperCase(s.charAt(i)))
            {
                ans[0]++;
            }
            else if(Character.isLowerCase(s.charAt(i)))
            {
                ans[1]++;
            }
            else if(Character.isDigit(s.charAt(i)))
            {
                ans[2]++;
            }
            else
            {
                ans[3]++;
            }
        }
        return ans;
    }
}