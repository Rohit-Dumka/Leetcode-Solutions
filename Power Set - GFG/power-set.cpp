//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	public:
	    void f(int i,vector<string>&a,string s,int n,string temp){
	        if(i>=n){
	            if(temp.size()>0)
	                a.push_back(temp);
	            return;
	        }
	        temp.push_back(s[i]);
	        f(i+1,a,s,n,temp);//include
	        temp.pop_back();
	        f(i+1,a,s,n,temp);//exclude
	    }
		vector<string> AllPossibleStrings(string s){
		    vector<string>a;
		    int n=s.size();
		    string temp="";
		    f(0,a,s,n,temp);
		    
		    sort(a.begin(),a.end());
		    return a;
		}
};

//{ Driver Code Starts.
int main(){
	int tc;
	cin >> tc;
	while(tc--){
		string s;
		cin >> s;
		Solution ob;
		vector<string> res = ob.AllPossibleStrings(s);
		for(auto i : res)
			cout << i <<" ";
		cout << "\n";

	}
	return 0;
}
// } Driver Code Ends