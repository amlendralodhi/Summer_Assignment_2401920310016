class Solution {
public:
    int trap(vector<int>& height) {

        int maxheight = 0;
        int n = height.size();
        int index = 0;
        for(int i = 0;i<n;i++)
        {
            if(maxheight < height[i])
            {
                maxheight = height[i];
                index = i;
            }
           
        }
        int water = 0;
        int minleft = 0;
        for(int i = 0;i<index;i++)
        {
            if(minleft < height[i])
            {
                minleft = height[i];
            }
            else{
                water += (minleft - height[i]);
            }
        }
        int minright = 0;
        for(int i = n-1;i>index;i--)
        {
            if(minright < height[i])
            {
                minright = height[i];
            }
            else{
                water += (minright - height[i]);
            }
        }
        return water;


        
    }
};