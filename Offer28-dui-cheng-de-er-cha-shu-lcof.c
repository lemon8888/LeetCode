//递归
bool com(struct TreeNode* left, struct TreeNode* right) {
    if(left == NULL && right == NULL) {
        return true;
    } else if(left == NULL || right == NULL) {
        return false;
    } else if(left->val != right->val) {
        return false;
    }
    return com(left->right, right->left) && com(left->left, right->right);

}

bool isSymmetric(struct TreeNode* root) {
    if(root == NULL) {
        return true;
    }
    return com(root->left, root->right);
}
