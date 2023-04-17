class Solution {
public:

    void solve(vector<int>&ans, TreeNode*root){
        if(root == NULL)return ; //Base Case

        solve(ans,root->left);  //Left call
        ans.push_back(root->val); // Pushing node value in vector
        solve(ans,root->right); // Right call
    }

    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>ans;
        solve( ans, root1);
        solve( ans, root2);
        sort(ans.begin(),ans.end());
        return ans;
    }
};