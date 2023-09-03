class Solution {
public:
    int findMin(vector<int>& nums) {
        priority_queue<int,vector<int>,greater<int>>pq(nums.begin(),nums.end());
        return pq.top();
    }
};