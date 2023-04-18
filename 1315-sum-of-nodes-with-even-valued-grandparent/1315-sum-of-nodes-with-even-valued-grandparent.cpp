class Solution {
public:
    int sum=0;

    void solve(TreeNode*root, TreeNode*Parents, TreeNode*grandParents){
        if(root==nullptr)return;
        
        if(grandParents!=nullptr && grandParents->val%2==0){
            sum+=root->val;
        }

        //Recursive call
        solve(root->left, root, Parents);
        solve(root->right, root, Parents);
    }

    int sumEvenGrandparent(TreeNode* root) {
        solve(root, nullptr, nullptr);
        return sum;
    }
};