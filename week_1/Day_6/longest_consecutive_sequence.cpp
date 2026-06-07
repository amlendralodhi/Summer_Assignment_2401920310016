class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.empty())
        {
            return 0;
        }

        map<int,int>mpp;
        for(auto it:nums)
        {
            mpp[it]++;
        }
        int count = 1;
        int maxi = 1;
        for(auto it:mpp)
        {
            if(mpp.count(it.first - 1))
            {
                count++;
                maxi = max(maxi,count);
            }
            else{
                count = 1;
            }
        }
        return maxi;
        
    }
};