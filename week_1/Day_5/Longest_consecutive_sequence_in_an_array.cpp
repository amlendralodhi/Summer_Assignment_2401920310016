class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        int count = 1;
        sort(nums.begin(),nums.end());
        int maxi = INT_MIN;

        for(int i = 0;i<nums.size()-1;i++)
        {
            if(nums[i+1] == nums[i]+1)
            {
                count++;
                maxi= max(maxi,count);
            }
            else{
                count = 1;
            }
        }
        return maxi;
        
    }
};