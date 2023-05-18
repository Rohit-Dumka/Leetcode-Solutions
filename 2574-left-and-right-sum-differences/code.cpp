class Solution {
public:
    vector<int> leftRightDifference(vector<int>& nums) {
        vector<int>left,right,ans;
        left.push_back(0);
        right.push_back(0);
        for(int i=0;i<nums.size()-1;i++)
        {
            left.push_back(left[i]+nums[i]);
        }
        int k=0;
        for(int j=nums.size()-1;j>0;j--)
        {
            right.push_back(right[k++]+nums[j]);
        }
        reverse(right.begin(),right.end());
        
        for(int i=0;i<nums.size();i++)
        {
            int x=abs(left[i]-right[i]);
            ans.push_back(x);
        }
        
        return ans;
    }
};
