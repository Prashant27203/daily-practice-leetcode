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
void solve(TreeNode* left1,TreeNode * right1,int level)
{
    if(!left1){
        return ;
    }
    if(level%2==0){
        int temp=left1->val;
        left1->val=right1->val;
        right1->val=temp; 
    }
    solve(left1->right,right1->left,level+1);
    solve(left1->left,right1->right,level+1);
}
    TreeNode* reverseOddLevels(TreeNode* root) {
        solve(root->right,root->left,0);
        return root;
    }
};