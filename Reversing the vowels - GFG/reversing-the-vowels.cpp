//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


// } Driver Code Ends
class Solution
{
    public:
        string modify (string s)
        {
        int a1=0;
        int b1=s.length()-1;
        while(a1<b1)
        {
            if((s[a1]=='a'||s[a1]=='e'||s[a1]=='i'||s[a1]=='o'||s[a1]=='u')&& (s[b1]=='a'||s[b1]=='e'||s[b1]=='i'||s[b1]=='o'||s[b1]=='u'))
            {
                swap(s[a1],s[b1]);
                a1++;
                b1--;
            }
            else if(s[a1]=='a'||s[a1]=='e'||s[a1]=='i'||s[a1]=='o'||s[a1]=='u')
            {
                b1--;
            }
            else if(s[b1]=='a'||s[b1]=='e'||s[b1]=='i'||s[b1]=='o'||s[b1]=='u')
            {
                a1++;
            }
            else
            {
                a1++;
                b1--;
            }
        }
        return s;
        }
};

//{ Driver Code Starts.

int main()
{
    int t; cin >> t;
    while (t--)
    {
        string s; cin >> s;
        Solution ob;
        cout <<ob.modify (s) << endl;
    }
}
// Contributed By: Pranay Bansal

// } Driver Code Ends