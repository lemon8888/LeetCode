//递归，sum从上往下减，比较最后sum和叶子节点
bool hasPathSum(struct TreeNode* root, int sum) {
    if(root == NULL) {
        return false;
    }
    if(root->left == NULL && root->right == NULL) {
        return sum == root->val;
    }
    return hasPathSum(root->left, sum - root->val) || hasPathSum(root->right, sum - root->val);
}

//
