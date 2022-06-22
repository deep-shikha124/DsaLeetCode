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
    bool solve(TreeNode * l, TreeNode * r){    
        if(l == NULL && r == NULL)
            return true; 
		
        else if(l == NULL || r == NULL || l->val != r->val)
            return false; 
        
        return solve(l->left, r->right) && solve(l->right, r->left);
    }
    bool isSymmetric(TreeNode* root) {
        // TreeNode *t1=root;
        // TreeNode* t2=root;
        // if(root==NULL) return true;
        // while(root!=NULL){
        //     if(t1->left->val==t2->right->val){
        //         t1=root->left;
        //         t2=root->right;
        //         return true;
        //         continue;
        //     }
        // }
        // return false;
        
        return solve(root->left, root->right);     
    }
};