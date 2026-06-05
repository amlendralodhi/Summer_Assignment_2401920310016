class Solution {
vector<int>generate_cols(int n)
{
    vector<int>ans;
    ans.push_back(1);
    int pro = 1;
    for(int i = 1;i<n;i++)
    {
        pro = pro*(n-i);
        pro = pro/i;
        ans.push_back(pro);
    }
    return ans;
}    
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>ans;
        

        for(int i = 1;i<=numRows;i++)
        {
            ans.push_back(generate_cols(i));
        }
        return ans;
    }
};