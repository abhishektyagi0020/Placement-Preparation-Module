 Search in a Binary Search Tree.cpp
 // leetcode problem 1 .cpp
 
 class Solution {
public:
    TreeNode* searchBST(TreeNode* root, int val) {
        if(root==NULL)
            return NULL;
        if(root->val==val)
            return root;
        TreeNode *left_side=searchBST(root->left,val);
        if(left_side!=NULL)
            return left_side;
        TreeNode *right_side=searchBST(root->right,val);
        return right_side;
    }
};
 
 
 
 
 
 
 // leetcode problem 2.cpp
