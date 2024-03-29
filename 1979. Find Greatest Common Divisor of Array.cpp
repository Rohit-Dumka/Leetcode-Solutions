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

// or you can try this to find direct gcd(greatest common divisor)of 2 nums-
//   use inbuilt gcd() function avail on cpp 

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
        return gcd(smallest,largest);
        return x;
    }
};

//see the code gets shorter
//we can optimise it more by performing sorting operation at the start--
//clean code-->

class Solution {
public:
    int findGCD(vector<int>& nums) {
        sort(nums.begin(), nums.end());//sorting done
        int x = gcd(nums.front(), nums.back());//since sorted array,therefore find gcd using inbuilt gcd function
        return x;
    }
};
