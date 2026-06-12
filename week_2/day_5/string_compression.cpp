class Solution {
public:
    int compress(vector<char>& chars) {

        // vector<char>ans;

        int i = 0;
        int index = 0;
        while(i<chars.size())
        {
            int j = i+1;
            while(j <chars.size() && chars[i] == chars[j])
            {
                j++;
            }
            int count = j-i;
            chars[index++] = chars[i];

            if(count > 1)
            {
                string cnt = to_string(count);
                for(char ch: cnt)
                {
                    chars[index++] = ch;
                }
            }
            i = j;
        }
        return index;
        
    }
};