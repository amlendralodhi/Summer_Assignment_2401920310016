class Solution {
    int depth(TreeNode* root)
    {
        if(root == NULL)
        {
            return 0;
        }
        return (1 + max(depth(root->left),depth(root->right)));

    }
public:
    int maxDepth(TreeNode* root) {
        if(root == NULL)
        {
            return 0;
        }
        // int count  = 0;
        return depth(root);
        
    }
};