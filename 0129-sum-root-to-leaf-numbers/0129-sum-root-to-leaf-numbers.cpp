
class Solution {
public:
    int mainsum=0;

    void solve(TreeNode*root, int sum){
        if (root == NULL) return; 
        sum = sum*10+root->val;
        if(root->left==NULL && root->right==NULL){
            mainsum+=sum;
            return;
        }

        solve(root->left, sum);
        solve(root->right, sum);
    }
    int sumNumbers(TreeNode* root) {
        solve(root, 0);
        return mainsum;
    }
};