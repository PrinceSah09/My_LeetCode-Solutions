class Solution {
public:

    void solve(vector<int>&ans, TreeNode*root){
        if(root == NULL)return ; //Base Case

        solve(ans,root->left);  //Left call
        ans.push_back(root->val); // Pushing node value in vector
        solve(ans,root->right); // Right call
    }
 


    vector<int> getAllElements(TreeNode* root1, TreeNode* root2) {
        vector<int>nums1;
        vector<int>nums2;
        solve(nums1, root1);
        solve(nums2, root2);
        
        vector<int>ans(nums1.size()+nums2.size());
        int i=0,j=0;
        int mainindex=0;
        while(i<nums1.size() && j<nums2.size()){
            if(nums1[i]<=nums2[j]){
                ans[mainindex++] = nums1[i++];
            }
            else ans[mainindex++] = nums2[j++];
        }
        
        while(i<nums1.size()){
            ans[mainindex++] = nums1[i++];
        }

        while(j<nums2.size()){
            ans[mainindex++] = nums2[j++];
        }
        return ans;
          
    }
};