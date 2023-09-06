class Solution {
public:
    int mySqrt(int x) {
        long long y=0;
        while(y*y<=x)
            y++;
        return y-1;
    }
};
//---------------------2-----------------------
class Solution {
public:
    int mySqrt(int x) {
        long long s=0, e=x;
        int ans=0;
        while(s<=e)
        {
            long long mid=s+(e-s)/2;
            if(mid*mid<=x)
            {
                ans=mid;
                s=mid+1;
            }
            elseaa
                e=mid-1;
        }
        return ans;
    }
};
//---------------------3---------------------
class Solution {
public:
    int mySqrt(int x) {
        if (x == 0)
            return x;
        int first = 1, last = x;
        while (first <= last) {
            int mid = first + (last - first) / 2;
            // mid * mid == x gives runtime error
            if (mid  == x / mid)
                return mid;
            else if (mid > x / mid) {
                last = mid - 1;
            }
            else {
                first = mid + 1;
            }
        }
        return last;
    }
};
