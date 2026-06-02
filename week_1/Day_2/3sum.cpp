class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {

        sort(nums.begin(),nums.end());
        // set<vector<int>>st;
        
        vector<vector<int>>ans;
        for(int i = 0;i<nums.size()-2;i++)
        {
            if(i>0 && nums[i] == nums[i-1])
            {
                continue;
            }
            int sum = 0;
            int first = nums[i];
            int st = i+1;
            int end = nums.size()-1;
            while(st<end)
            {
                sum = first + nums[st]+nums[end];
                if(sum > 0)
                {
                    end--;
                }
                else if(sum<0){
                    st++;
                }
                else if(sum == 0)
                {
                    vector<int>temp = {first,nums[st],nums[end]};
                    //st.insert(temp);
                    ans.push_back(temp);
                    st++;
                    end--;
                    while(st<end && nums[st] == nums[st-1])
                    {
                        st++;
                    }
                    while(st<end && nums[end] == nums[end+1])
                    {
                        end--;
                    }
                }
            }
        }
        return ans;
        
    }
};