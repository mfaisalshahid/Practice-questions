int goodNodes(TreeNode* root, int val = INT_MIN) {
    if (!root) return 0;
    if (root->val >= val) return 1 + goodNodes(root->left, root->val) + goodNodes(root->right, root->val);
    return goodNodes(root->left, val) + goodNodes(root->right, val);
}
