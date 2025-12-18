class Solution {
public:
    // swap values of mirror nodes
    void swapValues(TreeNode* left, TreeNode* right) {
        if (left == NULL || right == NULL) return;

        int temp = left->val;
        left->val = right->val;
        right->val = temp;
    }

    // traverse levels
    void level(TreeNode* left, TreeNode* right, int curr) {
        if (left == NULL || right == NULL) return;

        if (curr % 2 != 0) {
            swapValues(left, right);
        }

        level(left->left, right->right, curr + 1);
        level(left->right, right->left, curr + 1);
    }

    TreeNode* reverseOddLevels(TreeNode* root) {
        if (root == NULL) return NULL;
        level(root->left, root->right, 1);
        return root;
    }
};