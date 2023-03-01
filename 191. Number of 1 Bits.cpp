class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count=0;
        while(n!=0)
            {
                if(n&1)
                    count++;
                n=n>>1;
            }
    return count;
    }
};

Approach :Here given the binary number as an input.
          every input consisting of 32 bits( 'O's and '1's ).

first we right shift all the 1's until the binary number will be equivalent to 0 or till there is no 1 left.
    then we count the number of 1's at the same time by using the bit manipulation
    here we are using and operator i.e. n&1 which gives 1 only when the unit bit is 1 
    and 0 when the unit is zero and count the numbers of 1's by side.
    
    This is how we count no of 1 bits present in any binary number...
    


    
