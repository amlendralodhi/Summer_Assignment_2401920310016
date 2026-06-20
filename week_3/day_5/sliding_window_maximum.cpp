class Solution {
public:
    vector<int> maxSlidingWindow(vector<int>& nums, int k) {

        if(k<=1)
        {
            return nums;
        }
        vector<int>ans;
        deque<int>q;
        for(int i= 0;i<k-1;i++)
        {
            if(q.empty())
            {
                q.push_back(i);
            }
            else 
            {
                while(!q.empty() && nums[i]>nums[q.back()])
                {
                    q.pop_back();
                }
                q.push_back(i);
            }
        }
        for(int i = k-1;i<nums.size();i++)
        {
            if( i-k >= q.front())
            {
                q.pop_front();
            }
            while(!q.empty() && nums[i]>nums[q.back()])
            {
                q.pop_back();
            }
            q.push_back(i);
            ans.push_back(nums[q.front()]);
        }
        return ans;
    }
};

