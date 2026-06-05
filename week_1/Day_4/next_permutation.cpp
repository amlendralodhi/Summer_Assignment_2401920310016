class Solution {
public:
    void nextPermutation(vector<int>& nums) {

        int ans = -1;
        int n = nums.size();
        for(int i = n-2;i >= 0;i--)
        {
            if(nums [i] < nums[i+1])
            {
                ans = i;
                break;
            }
        }
        if(ans == -1)
        {
            reverse(nums.begin(),nums.end());
            return;
        }
        else{
            for(int i = n-1;i>ans;i--)
            {
                if(nums[i] > nums[ans])
                {
                    swap(nums[i],nums[ans]);
                    break;
                }
            }
        }
        int st = ans+1;
        int end = n-1;
        while(st < end)
        {
            swap(nums[st],nums[end]);
            st++;
            end--;
        }
        
    }
};