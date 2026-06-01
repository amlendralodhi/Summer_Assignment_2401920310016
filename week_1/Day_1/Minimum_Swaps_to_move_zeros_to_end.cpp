class Solution {
public:
    int minimumSwaps(vector<int>& nums) {

        int i = 0;
        int j = nums.size()-1;
        int count = 0;
        while(i<j)
            {
                while(nums[i] != 0 && i<j)
                    {
                        i++;
                    }
                while(nums[j] == 0 && i<j)
                    {
                        j--;
                    }
                if(i<j)
                {
                    swap(nums[i],nums[j]);
                    count++;
                    i++;
                    j--;
                }
                
            }

        return count;
    }
};