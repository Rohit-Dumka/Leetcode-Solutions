//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;
vector<string> extractIntegerWords(string s);

int main()
{
    int t;
    cin>>t;
    cin.ignore();
    while(t--)
    {
        string str;
        getline(cin,str);
        vector<string> ans = extractIntegerWords(str);
        if(ans.size() == 0)
            cout<<"No Integers";
        else
            for(auto i: ans) cout<<i<<' ';
        cout<<endl;
    }
    return 0;
}

// } Driver Code Ends


vector<string> extractIntegerWords(string s)
{
    vector<string>v;
    string temp="";
    for(int i=0;i<s.length();i++)
    {
        char n=s[i];
        if(n>='0' && n<='9')
        {
            temp+=n;
            if(!isdigit(s[i+1]))
            {
                v.push_back(temp);
                temp="";
            }
        }
    }
    return v;
}