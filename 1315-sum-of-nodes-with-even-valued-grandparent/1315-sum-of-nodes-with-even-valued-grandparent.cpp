
class Solution {
public:

    void dfs(TreeNode*root, int &sum){
        if(root==NULL)return;

        if(root->val%2==0){
            //check the left-child of root is exist or not
            if(root->left!=NULL){
                if(root->left->left!=NULL){
                    sum+=root->left->left->val;
                }
                if(root->left->right!=NULL){
                    sum+=root->left->right->val;
                }
            }

            //check the right-child of root is exist or not
            if(root->right!=NULL){
                if(root->right->left!=NULL){
                    sum+=root->right->left->val;
                }
                if(root->right->right!=NULL){
                    sum+=root->right->right->val;
                }
            }
        }
        dfs(root->left, sum);
        dfs(root->right, sum);
    }
    int sumEvenGrandparent(TreeNode* root) {
        int sum=0;
        dfs(root,sum);
        return sum;
    }
};