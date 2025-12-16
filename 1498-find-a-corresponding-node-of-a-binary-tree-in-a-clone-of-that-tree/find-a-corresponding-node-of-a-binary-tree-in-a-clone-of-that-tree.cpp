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
public:
   TreeNode* search(TreeNode* cloned, TreeNode* target) {
        if (cloned == NULL) return NULL;

        // compare by value (since structure is same)
        if (cloned->val == target->val) {
            return cloned;
        }

        TreeNode* left = search(cloned->left, target);
        if (left != NULL) return left;

        return search(cloned->right, target);
    }
    TreeNode* getTargetCopy(TreeNode* original, TreeNode* cloned, TreeNode* target) {
      return  search( cloned,target);

    }
};