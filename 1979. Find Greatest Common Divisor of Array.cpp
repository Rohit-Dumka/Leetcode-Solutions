class Solution {
public:
    int findGCD(vector<int>& nums) {
        int size=nums.size();
        int smallest=INT_MAX;
        int largest=INT_MIN;
        for(int i=0;i<size;i++){
            smallest=min(smallest,nums[i]);
            largest=max(largest,nums[i]);
        }

        int x=1;
        for(int i=1;i<=smallest;i++){
            if(smallest%i==0 && largest%i==0){
                    x=i;
            }
        }
        return x;
    }
};
