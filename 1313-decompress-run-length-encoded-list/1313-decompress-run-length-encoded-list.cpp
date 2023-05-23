class Solution {
public:
    vector<int> decompressRLElist(vector<int>& nums) {
        vector<int>ans;
        for(int i=0;i<nums.size();i++)
        {
            // map[nums[i]]=nums[i+1];
            if(!(i&1))
                {
                    for(int j=0;j<nums[i];j++)
                    {
                        ans.push_back(nums[i+1]);
                    }
                }
        }
        return ans;
    }
};