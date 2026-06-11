class Solution {
public:
    string reverseWords(string s) {

        string ans = "";
        string st = "";


        for(int i = 0;i<s.size();i++)
        {
            if(s[i] == ' ')
            {
                reverse(st.begin(),st.end());
                ans.append(st);
                ans.push_back(' ');
                st.clear();
            }
            else{
                st.push_back(s[i]);
                if(i == s.size()-1)
                {
                    reverse(st.begin(),st.end());
                    ans.append(st);
                }
            }
            
        }
        return ans;
        
    }
};