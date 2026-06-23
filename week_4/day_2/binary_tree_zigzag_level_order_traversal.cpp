class Solution {
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {

        if(root == NULL)
        {
            return {};
        }
        stack<TreeNode*>left;
        stack<TreeNode*>right;
        vector<vector<int>>ans;
        left.push(root);

        while(!left.empty() || !right.empty())
        {
            vector<int>ans2;
            while(!left.empty())
            {
                TreeNode* temp = left.top();
                left.pop();

                ans2.push_back(temp->val);
                if(temp->left)
                {
                    right.push(temp->left);
                }
                if(temp->right)
                {
                    right.push(temp->right);
                }
            }
            if(!ans2.empty())
            ans.push_back(ans2);
            // ans.clear();
            vector<int>ans3;
            while(!right.empty())
            {
                TreeNode* temp = right.top();
                right.pop();
                ans3.push_back(temp->val);
                if(temp->right)
                {
                    left.push(temp->right);
                }
                if(temp->left)
                {
                    left.push(temp->left);
                }
            }
            if(!ans3.empty())
            ans.push_back(ans3);
            // ans.clear();
        }
        return ans;
        
    }
};