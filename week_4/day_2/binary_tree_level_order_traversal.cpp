class Solution {
public:
    vector<vector<int>> levelOrder(TreeNode* root) {

        vector<vector<int>>ans2;
        if(root == NULL)
        {
            return ans2;
        }
        queue<TreeNode*>q;
        q.push(root);
        while(!q.empty())
        {
            vector<int>ans;
            int size = q.size();
            for(int i = 0; i< size;i++)
            {
                TreeNode* temp = q.front();
                q.pop();
                ans.push_back(temp->val);
                if(temp->left)
                {
                    q.push(temp->left);
                }
                if(temp->right)
                {
                    q.push(temp->right);
                }
            }
            ans2.push_back(ans);
        }
        return ans2;
        
    }
};