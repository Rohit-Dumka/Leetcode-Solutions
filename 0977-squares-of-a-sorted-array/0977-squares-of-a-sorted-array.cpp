class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
        vector<int>ans;
        int s=0;
        int e=nums.size()-1;
        while(s<=e)
        {
            if(abs(nums[s])>abs(nums[e]))
            {
                ans.push_back(nums[s]*nums[s]);
                s++;
            }
            else
            {
                ans.push_back(nums[e]*nums[e]);
                e--;
            }
        }
        reverse(ans.begin(),ans.end());
        
        return ans;
    }
};