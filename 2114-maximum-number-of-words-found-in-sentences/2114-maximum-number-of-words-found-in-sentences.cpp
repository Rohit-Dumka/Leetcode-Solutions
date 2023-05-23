class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        vector<int>ans;
        int count;
        for(int i=0;i<sentences.size();i++)
        {
            count=1;
            for(int j=0;j<sentences[i].size();j++)
            {
                if(sentences[i][j]==' ')
                {
                    count++;
                }
            }
            ans.push_back(count);
        }
        
        int x=*max_element(ans.begin(),ans.end());
        return x;
    }
};