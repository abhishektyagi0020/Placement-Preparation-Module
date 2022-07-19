// TWO SUM.CPP LEETCODE SOLUTION
class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
       /* int left=0, right=int(nums.size())-1,tempsum;
        while(left<right)
        {
            tempsum=nums[left]+nums[right];
            if(tempsum==target)
                return {left+1, right+1};
            if(tempsum>target)
                right--;
            else
                left++;
        }
        return {-1,-1};
            }
    int main()
    {
        vector<int>nums={1,4,5,11,12};
    int target=9;
    for(int &x:twoSum(nums,target))
        cout<<x<<" ";
        cout<<endl;
   */
        map<int,int> m;
        vector<int> v;
        for(int i=0; i<nums.size(); i++)
        {
            if(m.find(target-nums[i] )!= m.end())
            {
                v.push_back(m[target-nums[i]]);
                v.push_back(i);
                return v;
                }
               m[nums[i]]=i;
        }
               return v;
        }
};




// MERGE TWO SORTED ARRAY.CPP LEET CODE

class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        int r=m+n-1;// both array merge and subtract-1 value after merge array  
        int r1=m-1;//first array 
        int r2=n-1;//second array
        while(r1>=0 && r2>=0) // r1 value greater then or equal to 0 and r2 greater then or equal 0
            nums1[r--]=nums1[r1] > nums2[r2]?nums1[r1--]:nums2[r2--];//
        while(r2>=0)
            nums1[r--]=nums2[r2--];
    }
};
