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
    vector<vector<int>>ans;
    void levelorder(TreeNode* root,int level){
        if(!root) return;
        if(level==ans.size()) ans.push_back({});
        ans[level].push_back(root->val);
        levelorder(root->left,level+1);
        levelorder(root->right,level+1);
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
    
        levelorder(root,0);
        return ans;}
//     vector<vector<int>> res;
//     void rec(TreeNode* root, int level) {
//         if (!root) return;
//         if (level == res.size()) res.push_back({});
//         res[level].push_back(root->val);
//         rec(root->left, level+1);
//         rec(root->right, level+1);
//     }
	
//     vector<vector<int>> levelOrder(TreeNode* root) {
//         rec(root, 0);
//         return res;
//     }
    

    
    
};