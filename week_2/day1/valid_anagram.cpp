class Solution {
public:
    bool isAnagram(string s, string t) {

        int arr1[26] = {0};
        int arr2[26] = {0};

        for(int i = 0;i<s.size();i++)
        {
            int num1 = 0;
            char ch1 = s[i];
            num1 = ch1 -'a';
            arr1[num1]++;
        }
        for(int j = 0;j<t.size();j++)
        {
            int num2 = 0;
            char ch2 = t[j];
            num2 = ch2 -'a';
            arr2[num2]++;
        }
        for(int k = 0;k<26;k++)
        {
            if(arr1[k] != arr2[k])
            {
                return false;
            }
        }
        return true;
        
    }
};