class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {

        vector<vector<int>>ans;
        int n = nums.size();
        sort(nums.begin(),nums.end());
        for(int i = 0;i<n-3;i++)
        {
            if(i > 0 && nums[i] == nums[i-1])
            {
                continue;
            }
            for(int j = i+1;j<n-2;j++)
            {
                if(j > i+1 && nums[j] == nums[j-1])
                {
                    continue;
                }
                int start = j+1;
                int end = n-1;
                // int sum = (nums[i]+nums[j]);
                while(start < end)
                {
                    long long sum2 =  nums[i]*1LL+nums[j]+nums[start]+nums[end];
                    //int sum -= (nums[start]+nums[end])
                    //double(nums[i]) //+ double(nums[j]) + double(nums[start]) + double(nums[end]);//
                    if(sum2 > target)
                    {
                        end--;
                    }
                    else if(sum2 < target)
                    {
                        start++;
                    }
                    else if(sum2 == target)
                    {
                        ans.push_back({nums[i],nums[j],nums[start],nums[end]});
                        start++;
                        end--;
                        while(start<end && nums[start] == nums[start-1])
                        {
                            start++;
                        } 
                        while(start<end && nums[end] == nums[end+1])
                        {
                            end--;
                        }
                    }
                }
            }
        }
        return ans;
    }
};