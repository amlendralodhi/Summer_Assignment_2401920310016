class Solution {
public:
    int lengthOfLongestSubstring(string s) {

        int first = 0;
        int second = 0;
        int len = 0;
        vector<int>ans(250,0);

        while(second<s.size())
        {
            ans[s[second]]++;
            while(ans[s[second]] > 1)
            {
                ans[s[first]]--;
                first++;
            }
            len = max(len,second-first + 1);
            second++;
        }
        return len;
        
    }
};