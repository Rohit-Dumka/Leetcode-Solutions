class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        
       vector<vector<int>> ret;
        if(nums.size() < 3)
            return ret;
        
        sort(nums.begin(), nums.end());
        for(int i = 0 ; i < nums.size() - 2 ; i ++){
            if(i > 0 && nums[i] == nums[i-1])
                continue;
            int target = -nums[i];
            int j = i + 1, k = nums.size() - 1;
            while(j < k){
                if(nums[k] + nums[j] > target){
                    k--;
                }
                else if(nums[k] + nums[j] < target){
                    j++;
                }
                else{
                    vector<int> temp = {nums[i] , nums[j], nums[k]};
                    ret.push_back(temp);
                    while(k > j && nums[j+1] == nums[j]) j ++;
                    j ++;
                }
            }
        }
        return ret;
    }
};
