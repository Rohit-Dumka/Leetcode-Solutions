//{ Driver Code Starts
//Initial Template for Java

import java.io.*;
import java.util.*;

class GFG {
    public static void main(String args[]) throws IOException {
        BufferedReader read =
            new BufferedReader(new InputStreamReader(System.in));
        int t = Integer.parseInt(read.readLine());
        while (t-- > 0) {
            String s = read.readLine();
            
            Solution ob = new Solution();
            String result = ob.removeVowels(s);
            
            System.out.println(result);
        }
    }
}
// } Driver Code Ends


//User function Template for Java

class Solution {
    String removeVowels(String S) {
       S=S.replace("a","");
       S=S.replace("e","");
       S=S.replace("i","");
       S=S.replace("o","");
       S=S.replace("u","");
       S=S.replace("A","");
       S=S.replace("E","");
       S=S.replace("I","");
       S=S.replace("O","");
       S=S.replace("U","");
       return S;
    }
}