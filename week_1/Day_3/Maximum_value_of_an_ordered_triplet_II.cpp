class Solution {
public:
    long long maximumTripletValue(vector<int>& nums) {

        int n  = nums.size();
        vector<long long>pref(n);
        vector<long long>suff(n);
        pref[0]= nums[0];
        for(int i = 1;i<n;i++)
        {
            // pref[i] = max(pref[i-1],nums[i]);
            if(nums[i]>pref[i-1])
            {
                pref[i] = nums[i];
            }
            else{
                pref[i]  = pref[i-1];
            }
        }
        suff[n-1] = nums[n-1];
        for(int i = n-2;i>=0;i--)
        {
            // suff[i] = max(suff[i+1],nums[i]);
            if(nums[i]>suff[i+1])
            {
                suff[i] = nums[i];
            }
            else{
                suff[i] = suff[i+1];
            }
        }
        long long maxi = 0;
        for(int i = 1;i<n-1;i++)
        {
            // maxi = max(maxi,((pref[i-1] - nums[i])*suff[i+1]));
            long long pro = (pref[i-1] - nums[i])*suff[i+1]*1LL;
            if(pro > maxi)
            {
                maxi = pro;
            }
        }
        return maxi>0?maxi:0;
        
    }
};