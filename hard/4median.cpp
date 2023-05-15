class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int s;
        
        for(auto x:nums2)
            nums1.push_back(x);
        
        sort(nums1.begin(),nums1.end());
        s=nums1.size();
        if(s&1)
        {
            return nums1[s/2];
        }
        else
        {
            double med=nums1[s/2]+nums1[(s/2)-1];
            return med/2;
        }
    }
};
