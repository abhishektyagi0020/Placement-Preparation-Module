// problem 1 reverse bit.cpp
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
             uint32_t a=0;
        for(int i=0;i<32;i++) //0 to 30 is 31 times --- shift n-1 times = 31 times
        {
            a=a|(n&1); //last bit of n is (n&1). We add that to a by a=a|(n&1)
            if(i<31)
                a=a<<1; //shift a to left by 1 bit
            n=n>>1; //shift n to right by 1 bit
        }
        return a;
    }
};

//problem 2 Single Number.cpp
class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int xorsum=0;
        for(int i=0;i<nums.size();i++)
        {
            xorsum = xorsum xor nums[i];
        }
        return xorsum;
    }
};
   
