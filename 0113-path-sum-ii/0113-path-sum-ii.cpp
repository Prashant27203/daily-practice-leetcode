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
void solve(vector<vector<int>>&v,TreeNode * root,int sum,vector<int>&ds )
{
    if(!root){return ;}
    ds.push_back(root->val);
    if(!(root->left) and !(root->right) and root->val == sum ){v.emplace_back(ds);}
    solve(v,root->left,sum-(root->val),ds);
    solve(v,root->right,sum-(root->val),ds);
    ds.pop_back();
}
    vector<vector<int>> pathSum(TreeNode* root, int targetSum) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        vector<vector<int>>v;
        vector<int>ds;
        solve(v,root,targetSum,ds);
        return v;
    }
};