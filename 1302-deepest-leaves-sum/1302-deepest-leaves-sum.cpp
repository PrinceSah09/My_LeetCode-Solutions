class Solution {
public:
    int deepestLeavesSum(TreeNode* root) {
        //Here we use DFS
        queue<TreeNode*>q;
        q.push(root);
        int sum;
        while(!q.empty()){ 
            sum=0;
            int size = q.size();
            while(size--){
                TreeNode*temp = q.front(); 
                sum+=temp->val;
                q.pop();
                if(temp->left!=NULL){
                    q.push(temp->left);
                }
                if(temp->right!=NULL){
                    q.push(temp->right);
                }
            }
            cout<<sum<<" ";
        }
        return sum;
    }
};