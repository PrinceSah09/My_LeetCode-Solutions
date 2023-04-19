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

    void solve(TreeNode* root, vector<int>&v, int level){
        if(root==NULL)return;
        if(level == v.size()){
            v.push_back(root->val);
        }

        solve(root->right, v, level+1);
        solve(root->left, v, level+1);
    }
     
    vector<int> rightSideView(TreeNode* root) {
        vector<int>v;

        /* if(root==NULL)   //Using Level order 
            return {};

        queue<TreeNode*> q;
        vector<vector<int>> ans;
        q.push(root);
        while(!q.empty())
        {
            int size=q.size();
            vector<int> res;
            for(int i=0;i<size;i++)
            {
                TreeNode* temp=q.front();
                res.push_back(temp->val);
                q.pop();
                if(temp->left)
                    q.push(temp->left);
                if(temp->right)
                    q.push(temp->right);
            }
            ans.push_back(res);
        }
         for(int i=0;i<ans.size();i++){
             for(int j=ans[i].size()-1;j>=0;j--){
                 v.push_back(ans[i][j]);
                 break;
             }
         } */

         solve(root, v, 0);
         return v;
    }
};