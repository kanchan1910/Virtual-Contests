class Solution {
public:
    bool findRotation(vector<vector<int>>& matrix, vector<vector<int>>& target) 
    {
        int n = matrix.size();
        int m = matrix[0].size();
        // degree - 0, 90, 270, so count = 3
        // 360 degree will be same as 0 degree
        int count = 3;
        while(count > 0 && matrix != target)
        {
            // transpose
    
            for(int i = 0; i < n; i++)
            {
                for(int j = i; j < m; j++)
                {
                    swap(matrix[i][j], matrix[j][i]);
                }
            }
            for(int j = 0; j < m / 2; j++)
            {
                for(int i = 0; i < n; i++)
                {
                swap(matrix[i][j], matrix[i][m - j - 1]);
                }
            }
            count--;
        }
        if(matrix != target)
        {
            return false;
        }
      return true;  
    }
};
// tc o(n * n)
// sc o(1)
