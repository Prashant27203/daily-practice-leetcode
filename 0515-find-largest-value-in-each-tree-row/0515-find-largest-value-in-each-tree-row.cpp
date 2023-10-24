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
    vector<int> largestValues(TreeNode* root) {
        ios::sync_with_stdio(false);
        cin.tie(nullptr);
        cout.tie(nullptr);
        queue<TreeNode*>q;
        vector<vector<int>>ans;
         vector<int>answer;
        if(!root) return answer ;
        q.push(root);
        while(!q.empty())
        {
            vector<int>v;
            int n = q.size();
            for(int i=0;i<n;i++)
            {
                TreeNode * temp = q.front();
                q.pop();
                v.push_back(temp->val);
                if(temp->left){q.push(temp->left);}
                if(temp->right){q.push(temp->right);}
            }
            ans.emplace_back(v);
        }
       
        for(auto it:ans)
        {
            int value= *max_element(it.begin(),it.end());
            answer.push_back(value);
        }
        return answer;
    }
};