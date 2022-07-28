// Problem 1 binary tree perorder trevarsal .cpp

/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *l;
 *     TreeNode *r;
 *     TreeNode() : val(0), l(nullptr), r(nullptr) {}
 *     TreeNode(int x) : val(x), l(nullptr), r(nullptr) {}
 *     TreeNode(int x, TreeNode *l, TreeNode *r) : val(x), l(l), r(r) {}
 * };
 */
class Solution {
public:
    vector<int> inorderTraversal(TreeNode* root) {
        stack<TreeNode*>st;// stack imput 
        TreeNode* node=root;
        vector<int> inorder; // vector 
 
        while(true)
        {
if(node!=NULL)
{
st.push(node);
node=node->left;
}
        else
        {
        if(st.empty() == true)
            break;
            node=st.top();
            st.pop();
            inorder.push_back(node->val);
            node=node->right;
            
        }}
return inorder;
    }
};
//problem 2Binary Tree Inorder Traversal.cpp



//problem 3 Binary Tree postorder Traversal
