// power  of  2 .cpp     leetcode solutions

class Solution {
public:
    bool isPowerOfTwo(int i) {
        // 1st  approach solution a  
         return i>0 && not (i& i-1);
      
        // 2nd approach solution 
        /*  if(n==0)
            return false;
            while(n%2==0)
            n/=2;
            return n==1;*/
    }
};

// Number of 1 Bits.cpp leetcode

class Solution {
public:
    int hammingWeight(uint32_t n) {
       int count=0;
        while(n>0)
      
       {
            if(n&1)
            count++;
            n=n>>1;
        }
          return count;
    }
};  


/* 2nd approach 100 % 
int count = 0;
{
            n&=n-1;
            count+=1;
        }
return count;
*/


/* 3rd approaach
 int count =0; 
       for(int i = 31; i >= 0; i--){
            if((n & 1) == 1) count++;
            n>>=1;}
    */


