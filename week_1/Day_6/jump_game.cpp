class Solution {
public:
    bool canJump(vector<int>& nums) {

        int n = nums.size();
        int st = 0;
        int jump = 0;
        while(st < n && jump < n)
        {
            if(st > jump)
            return false;

            int n = nums[st];
            jump = max(jump,st+n);
            st++;
        }
        if(jump >= n-1)
        {
            return true;
        }

        return false;
    }
};