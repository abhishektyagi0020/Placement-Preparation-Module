// Merge two binary tree.CPP -
class Solution {
public:
    TreeNode* mergeTrees(TreeNode* t1, TreeNode* t2) {
    TreeNode *node = nullptr;
        if (t1 != nullptr || t2 != nullptr) {
            node = new TreeNode((t1 != nullptr ? t1->val : 0) + (t2 != nullptr ? t2->val : 0));
            node->left = mergeTrees(t1 != nullptr ? t1->left : nullptr, t2 != nullptr ? t2->left : nullptr);
            
            node->right = mergeTrees(t1 != nullptr ? t1->right : nullptr, t2 != nullptr ? t2->right : nullptr);
        }
        
        return node;        
    }
};



// Populating Next Right Pointer in each Node.cpp- leetcode solution

class Solution {
public:
    Node* connect(Node* root) {
    if(root==nullptr){
            return root;
        }
        queue<Node*> q;
        q.push(root);
        
        while(!q.empty()){
            int sz = q.size();
            Node* prev = nullptr;
            while(sz--){
                Node* curr = q.front();
                q.pop();
                if(prev!=nullptr){
                    prev->next = curr;
                }
                prev = curr;
                if(curr->left!=nullptr){
                    q.push(curr->left);
                }
                if(curr->right!=nullptr){
                    q.push(curr->right);
                }
            }
        }        
        return root;    
    }
};
