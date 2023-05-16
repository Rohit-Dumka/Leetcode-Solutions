class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int count=0,j;
        for(int i=0 ; i<nums.size() ; i++)
        {
            for(j=0 ; j<nums.size() ; j++)
            {
                if((nums[i] == nums[j])&&(i<j))
                {
                    count++;
                }
            }
        }
        
        return count;
    }
};