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
        
    void solve(vector<int>&v, TreeNode*root){
        
        if(root==NULL)return;
        if(root->left==NULL && root->right==NULL){
            v.push_back(root->val);
            return;
        }
        solve(v, root->left);
        solve(v, root->right);    
    }
    
    
    bool leafSimilar(TreeNode* root1, TreeNode* root2) {
        vector<int>ans1;
        vector<int>ans2;
        solve(ans1, root1);
        solve(ans2, root2);
        return ans1==ans2;
    }
};