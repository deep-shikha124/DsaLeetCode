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
    //postorder-> left right root
    void po(TreeNode* root,vector<int>&v){
        if(root ==NULL) return;
        
        po(root->left,v);
        po(root->right,v);
        v.push_back(root->val);
    }
    vector<int> postorderTraversal(TreeNode* root) {
        vector<int>v;
        po(root,v);
        return v;
    }
};