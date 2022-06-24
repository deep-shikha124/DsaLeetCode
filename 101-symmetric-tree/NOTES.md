class Solution {
public:
//let the two sides of the tree be root1->left side,root2->right
bool check(TreeNode* root1,TreeNode*root2){
//if both the roots are null->symmetrical->return true
if(root1==NULL && root2==NULL) return true;
//if either one side of the root is null->unsymmetrical->return false
if(root1==NULL || root2==NULL) return false;
//compare for root1 left and root2 right and then root1 right and root2 left
return check(root1->left,root2->right) && check(root1->right,root2->left);
}
bool isSymmetric(TreeNode* root) {
return check(root,root);
}
};