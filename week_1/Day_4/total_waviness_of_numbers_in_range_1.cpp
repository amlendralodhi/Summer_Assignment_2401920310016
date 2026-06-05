class Solution {
public:
    int totalWaviness(int num1, int num2) {

        int sum = 0;
        for(int i = num1;i<= num2;i++)
        {
            string s = to_string(i);
            for(int j = 1;j<s.size()-1;j++)
            {
                int n1 = s[j-1] - '0';
                int n = s[j] - '0';
                int n2 = s[j+1] - '0';
                if(n1 < n && n > n2)
                {
                    sum++;
                }
                else if(n1 > n && n < n2)
                {
                    sum++;
                }
            }
        }
        return sum;
        
    }
};