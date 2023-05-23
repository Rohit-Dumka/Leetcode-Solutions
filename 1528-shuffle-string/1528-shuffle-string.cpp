class Solution {
public:
    string restoreString(string s, vector<int>& indices) {
        map<int,char>m;
        vector<char>ans;
        string shuffled="";
        for(int i=0;i<indices.size();i++)
        {
            m[indices[i]]=s[i];
        }
    
        for(int j=0;j<indices.size();j++)
        {
            ans.push_back(m[j]);
        }
        for(int i=0;i<ans.size();i++)
        {
            shuffled+=ans[i];
        }
        return shuffled;
    }
};