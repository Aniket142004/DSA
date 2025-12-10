/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
    bool find(TreeNode* root ,TreeNode* target){
        if(root== NULL) return false;
        if(root==target) return true;
        return find(root->left,target)|| find(root->right,target);
    }
public:
    TreeNode* lowestCommonAncestor(TreeNode* root, TreeNode* p, TreeNode* q) {
        if(root==p||root==q) return root; // if root is either p or q
        else if(find(root->left,p)&& find(root->right,q)) return root;// pis in the left and q in the right
        else if(find(root->right,p)&& find(root->left,q)) return root; // qis on the left and p in the rright
        else if(find(root->left,p) && find(root->left,q)) return lowestCommonAncestor(root->left,p,q) ;// both of p and q in the right so ignore the left
        return lowestCommonAncestor(root->right,p,q); // both of pand q in the left so ignore the right

    }
};