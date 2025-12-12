
class Solution {
public:
bool issum(TreeNode* root ,int sum, int target){
    if(root==NULL) return 0;
     sum+=root->val;
    if(root->left==NULL && root->right==NULL){
      return (sum == target);
      
    }
    return issum(root->left ,sum, target)||
    issum(root->right ,sum,target);
}
    bool hasPathSum(TreeNode* root, int targetSum) {
        return issum(root, 0, targetSum);
  
    }
};