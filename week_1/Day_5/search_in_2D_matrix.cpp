class Solution {
public:
    bool searchMatrix(vector<vector<int>>& matrix, int target) {

        int st = 0;
        int end = matrix[0].size()-1;
        while(st < matrix.size() &&  end < matrix[0].size())
        {
            if(matrix[st][end] == target)
            {
                return true;
            }
            else if(matrix[st][end] < target)
            {
                st++;
            }
            else{
                end--;
            }
        }
        return false;
        
    }
};