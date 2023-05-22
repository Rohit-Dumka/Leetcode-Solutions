class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int>ans;
        int i=0;
        int n=nums.size();
        while(n>0)
        {
            ans.insert(ans.begin()+index[i],nums[i]);
            n--;
            i++;
        }
        
        return ans;
        
    }
};