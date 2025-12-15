
class Solution {
public:
 int level(TreeNode*root){
    if(root==NULL) return 0;
    return 1+max(level(root->left),level(root->right));
 }
 // same as nth level code just the 
  void nthlevel(TreeNode* root,int curr,int target,vector<int>&ans){
        if(root==NULL) return;
        if(curr==target){
          ans[curr]=root->val; // just this statement is different 
        }
         nthlevel(root->left,curr+1,target,ans);
        nthlevel(root->right,curr+1,target,ans);
    }
    void lorder(TreeNode* root,vector<int>&ans){
        int n = ans.size();
        for(int i=0;i<n;i++){
            nthlevel(root,0,i,ans);
        }
    }
    vector<int> rightSideView(TreeNode* root) {
     
         vector<int>ans(level(root),0);// all the values of the vec were initialized as 0
        lorder(root,ans);
        return ans ;
    }

};