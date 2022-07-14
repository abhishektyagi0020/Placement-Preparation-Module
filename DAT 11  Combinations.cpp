// combinations.cpp leetcode solution 
class Solution {
public:
    vector<vector<int>> combine(int n, int k) {
        vector<vector<int>> out;
        vector<int>comb;
        combination(out,comb,n,k,1);
        return out;
    }

void combination(vector<vector<int>>& out,vector <int>comb, int n,int k,int m)
{
if(comb.size()==k)
{
    out.push_back(comb);
    return;
}
for(int j=m; j<=n; j++)
{
comb.push_back(j);
combination(out,comb,n,k,j+1);
comb.pop_back();
     }
    }
};


// problem 2 permutation.cpp leetcode
class Solution {
public:
            vector<vector<int>>ans;
    void permutation(vector<int>&a ,int idx, int n)
    //vector<vector<int>> permute(vector<int>& nums,int idx,int n)
    {
        if(idx==n)
        {
            ans.push_back(a);
            return;
            }
        for(int i=idx; i<n; i++)
        {
            swap(a[idx],a[i]);
            permutation(a,idx+1,n);
            swap(a[idx],a[i]);
        }
        }
    vector<vector<int>>permute(vector<int>& nums)
    {
        permutation(nums,0,nums.size());
        return ans;
    
    }
};


// problem 3 letter case permutation.cpp
