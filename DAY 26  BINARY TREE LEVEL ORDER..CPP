// Problem Binary tree  level order.cpp
/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {
     vector<vector<int>>ans;
        if(root==NULL)
            return ans;
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
        int x=q.size();
            vector<int>t;
            for(int i=0; i<x; i++)
            {
                TreeNode* temp=q.front();
                q.pop();
                t.push_back(temp->val);
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
        ans.push_back(t);
        }
        return ans;
    }
};


// problem 2 Maximum Deapth of Subarray.cpp

class Solution {
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL) return 0;
        int left = maxDepth(root->left);
        int right = maxDepth(root->right);
        return max(left, right) + 1;
    }
};


// problem 3 Symmetric tree.cpp
class Solution {
public:
    bool solve(TreeNode* left,TreeNode* right) 
    {
        if(left==NULL || right==NULL)
        {
            return left==right;
        }
        if(left->val != right->val)
            return false;
        return solve(left->left,right->right) && solve(left->right, right->left); 
    }
    bool isSymmetric(TreeNode* root)
    {
        return solve(root->left,root->right);
    }
};
