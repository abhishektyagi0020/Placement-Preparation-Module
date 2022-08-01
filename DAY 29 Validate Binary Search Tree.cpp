//Validate Binary Search Tree .cpp  problem 1
class Solution {
public:
    bool Valid(TreeNode* node,long min,long max) {
        if(!node)
            return true;
        if(node ->val <max && node ->val >min ) 
            return Valid(node->left,min, node->val) && Valid(node ->right,node->val,max);
        return false;
    }
    bool isValidBST(TreeNode* root)
    {  return Valid(root,LONG_MIN,LONG_MAX);
    }
};





//Two Sum IV - Input is a BST   problem 2
class Solution {
public:
    unordered_set<int>s;
    bool findTarget(TreeNode* root, int k) {
        if(root==NULL)
            return false;
        if(s.count(k-root->val))
            return true;
        s.insert(root->val);
        return findTarget(root->left,k)|| findTarget(root->right,k);
        
    }
};






//Lowest Common Ancestor of a Binary Search Tree  problem 
class Solution {
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==0)
            return root;
        while(root!=0)
        {
        if(p->val>root->val and q->val >root->val)
            root=root->right;
            else if(p->val < root->val and q->val <root->val)
                root=root->left;
            else
                return root;
        }
        return root;
    
    }
};
