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
    int level(TreeNode* root){
        if(root==NULL) return 0;
        return 1+max(level(root->left),level(root->right));
    }
       void nthlevel2(TreeNode* root,int curr,int target,vector<int>&v){ // right to left
        if(root==NULL) return;
        if(curr==target){
            v.push_back(root->val);
            return;
        }
        nthlevel2(root->right,curr+1,target,v);// first right call then left call
         nthlevel2(root->left,curr+1,target,v);
        
    }
    void nthlevel1(TreeNode* root,int curr,int target,vector<int>&v){ // left toright
        if(root==NULL) return;
        if(curr==target){
            v.push_back(root->val);
            return;
        }
         nthlevel1(root->left,curr+1,target,v);
        nthlevel1(root->right,curr+1,target,v);
    }
    void lorder(TreeNode* root,vector<vector<int>>&ans){
        int n = level(root);
        for(int i=1;i<=n;i++){
            vector<int>v;
            if(i%2==0){
            nthlevel2(root,1,i,v);
            ans.push_back(v);
            }
            else{
                 nthlevel1(root,1,i,v);
            ans.push_back(v);
            }
            cout<<endl;
        }
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
         vector<vector<int>> ans;
         lorder(root, ans);
         return ans ;
    }
};