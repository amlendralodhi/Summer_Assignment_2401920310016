class Solution {
public:
    vector<int> findAnagrams(string s, string p) {


        vector<int>ans(256,0);
        for(int i = 0;i<p.size();i++)
        {
            ans[p[i]]++;
        }
        int n = p.size();
        int l = 0;
        int r = 0;
        vector<int>ans2;
        int count = 0;

        while(r < s.size())
        {
            ans[s[r]]--;
            if(ans[s[r]] >= 0)
            {
                count++;
            }
            if(r-l+1 > n)
            {
                if(ans[s[l]] >= 0)
                {
                    count--;
                }
                ans[s[l]]++;
                l++;
            }
            if(count == n)
            {
                ans2.push_back(l);
            }
            r++;
        }
        return ans2;
        
    }
};