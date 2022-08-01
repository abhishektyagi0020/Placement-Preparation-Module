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
 Insert into a Binary Search Tree


class Solution {
public:
    TreeNode* insertIntoBST(TreeNode* &root, int &val) {
      if(!root)
      {
          root=new TreeNode(val);
          return root;
      }
        if(val<root->val)
            insertIntoBST(root->left,val);
        else
            insertIntoBST(root->right,val);
        return root;
    }
};
