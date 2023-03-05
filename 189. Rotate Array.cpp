class Solution {

public:
    void rotate(vector<int>& nums, int k) 
    {
        k %=nums.size();
        //since every nth time the array is in it's initial position(here n is size of vector)
        reverse(nums.begin(), nums.end());
        reverse(nums.begin(), nums.begin()+k);
        reverse(nums.begin()+k, nums.end());//rotation done
    }
};
