class Solution {
public:
    bool repeatedSubstringPattern(string s) {


        string s2 = s+s;
        string s3 = "";
        for(int i = 1;i< s2.size()-1;i++)
        {
            s3 += s2[i];
        }
        // s3 = s2.substr(1,s2.size()-2);
        if(s3.find(s) != string::npos)
        {
            return true;
        }
        return  false;
        
    }
};