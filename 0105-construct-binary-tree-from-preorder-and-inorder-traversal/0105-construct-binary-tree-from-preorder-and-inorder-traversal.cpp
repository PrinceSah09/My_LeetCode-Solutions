 
class Solution {
public:


    int find( vector<int>&v ,int element){
        for(int i=0;i<v.size();i++)
        {
            if(v[i]==element)return i;
        }
        return -1;
    }

    TreeNode* solve(vector<int>& preorder, vector<int>& inorder, int& PreOrdeindex, int InorderStart, int InorderEnd, int size){
        if(PreOrdeindex >= size || InorderStart>InorderEnd){
            return NULL;
        }

        int element = preorder[PreOrdeindex++];

        TreeNode*root = new TreeNode(element);

        int position = find(inorder, element);

        root->left = solve(preorder, inorder, PreOrdeindex, InorderStart,position-1, size);
        root->right = solve(preorder, inorder, PreOrdeindex, position+1,InorderEnd, size);
        return root;
    }

    TreeNode* buildTree(vector<int>& preorder, vector<int>& inorder) {
        int PreOrderindex=0;
        int size = inorder.size();
        int InorderStart = 0, InorderEnd = size-1;
        TreeNode*ans = solve(preorder, inorder, PreOrderindex, InorderStart,InorderEnd, size);
        return ans;
    }
};