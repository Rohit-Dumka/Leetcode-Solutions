//solution in O(n^2)

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        int s=nums.size();
        for(int i=0;i<s;i++)
        {
            for(int j=i+1;j<s;j++)
            {
                if((nums[i]+nums[j])==target)
                {
                    ans.push_back(i);
                    ans.push_back(j);
                    return ans;
                }
            }
        }
        return ans;
    }
};

//optimised solution using unordered map( O(n) )
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        vector<int>ans;
        unordered_map<int,int>m;
        int n=nums.size();
        
        for(int i=0;i<n;i++)
        {
            int t=target-nums[i];
            if(m.find(t)!=m.end())
            {
                ans.push_back(m[t]);
                ans.push_back(i);
            }
            m[nums[i]]=i;
        }
      
        return ans;
    }
};
