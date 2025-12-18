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
int sum =0;
int count=0;
  void traverse(TreeNode* root){
    if(root==NULL) return;
     sum+= root->val;
    count++;
   traverse(root->left);
   traverse(root->right);

  }
  int average(TreeNode* root){
    if(root==NULL) return NULL;
     sum = 0;
        count = 0;
    traverse(root);
    int average = sum/count;
    return average;
  }
  int ans=0;
    int averageOfSubtree(TreeNode* root) {
       if(root==NULL) return NULL;
       
       if(average(root)==root->val){
        ans++;
       } 
        averageOfSubtree(root->left);
         averageOfSubtree(root->right);
         return ans;
    }
   
};