class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {


        sort(nums.begin(),nums.end());
        int n = nums.size();
        int mini= INT_MAX;
        int diff = INT_MAX;
        int ans=0;
        for(int i = 0;i<n-2;i++)
        {
            // if(i>0 && nums[i] == nums[i-1])
            // {
            //     continue;
            // }
            int start = i+1;
            int end = n-1;
            while(start < end)
            {
                int sum = (nums[i]+ nums[end] + nums[start]);
                diff = min(diff,abs(target - sum ));
                if(diff < mini)
                {
                    mini = diff;
                    ans = sum;
                }
                if(sum > target)
                {
                    end--;
                    // mini = min(mini,sum);                     
                }
                else if(sum < target)
                {
                    start++;
                    // mini = min(mini,sum);
                }
                else{
                    // mini = min(mini,sum);
                    // diff = sum;
                    start++;
                    end--;
                    // break;
                }

                
            }
        }
        return ans;
        
    }
};