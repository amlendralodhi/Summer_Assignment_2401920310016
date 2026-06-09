class Solution {
public:
    bool checkInclusion(string s1, string s2) {

        if(s2.size()<s1.size())
        {
            return false;
        }
        int t = s1.size();
        unordered_map<int,int>mpp;
        for(int i = 0;i<s1.size();i++)
        {
            mpp[s1[i]]++;
        }
        int r = 0;
        int l = 0;
        int count = 0;
        while(r<s2.size())
        {
            mpp[s2[r]]--;
            if(mpp[s2[r]]>=0)
            {
                count++;
            }
            if(r-l+1 > t)
            {
                if(mpp[s2[l]] >= 0)
                {
                    count--;
                    
                }
                mpp[s2[l]]++;
                l++;
            }
            if(count == t)
            {
                return true;
            }
            r++;
        }
        return false;
    }
};