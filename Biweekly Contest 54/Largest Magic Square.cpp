class Solution {
public:
    bool isMagicSquare(int x, int y, int n, vector<vector<int>>& gr, vector<vector<int>>& gc, vector<vector<int>>& grid) {
        // x and y are top left x and y coordinates of square
        // gr is the 2D row prefix sum vector
        // gc is the 2D column prefix sum vector
        
        // diag1 and diag2 are the sum of the two diagonals
        int diag1 = 0, diag2=0;
        for (int i=0; i<n; i++) {
            diag1 += grid[x+i][y+i];
            diag2 += grid[x+i][y+n-1-i];
        }

        if(diag1 != diag2)
            return false;

        // Not check sum of row and columns
        for (int i=0; i<n; i++) {
            // Get rowSum from prefix vector.  Handle edge case of 0th row
            int rowSum = gr[x+i][y+n-1] - (y == 0 ? 0 : gr[x+i][y-1]);
            // Get colSum from prefix vector. Handle edge case of 0th col
            int colSum = gc[x+n-1][y+i] - (x == 0 ? 0 : gc[x-1][y+i]);

            if (rowSum != colSum || colSum != diag1)
                return false;
        }
        return true;
    }
    
    int largestMagicSquare(vector<vector<int>>& grid) {
        // Dimensions of Grid
        int n = grid.size();
        int m = grid[0].size();
        // Prefix rowSum
        vector<vector<int>>gr = vector<vector<int>>(n, vector<int>(m, 0));
        // Prefix colSum
        vector<vector<int>>gc = vector<vector<int>>(n, vector<int>(m, 0));
        
        // Calculate 2D prefix row sum
        for(int i=0; i<n; i++) {
            int s = grid[i][0];
            gr[i][0] = s;
            for(int j=1; j<m; j++) {
                gr[i][j] = gr[i][j-1] + grid[i][j];
            }
        }
        
        // Calculate 2D prefix col sum
        for(int i=0; i<m; i++) {
            int s = grid[0][i];
            gc[0][i] = s;
            for(int j=1; j<n; j++) {
                gc[j][i] = gc[j-1][i] + grid[j][i];
            }
        }
        
        // The max size of magic square is 1 initially. Which will be the default answer
        int curmax = 1;
        // k is the size of magic square to iterate upon
        for(int k=2; k<=min(m, n); k++) {
            int flag = 1;
            // Go through each point considering it as the top-left point
            for(int i=0; i<n; i++) {
                for(int j=0; j<m; j++) {
                    // Check if the square to check does not exceed bounds of grid
                    if(i + k - 1 < n and j + k - 1 < m) {
                        if(isMagicSquare(i, j, k, gr, gc, grid)) {
                            // If it is a magic square, no need to check for any other 
                            // squares as we only need the dimension of magic square
                            curmax = max(k, curmax);
                            flag = 0;
                        }
                    }
                    if(flag == 0)
                        break;
                }
                if(flag == 0)
                    break;
            }
        }
        return curmax;
    }
};

// tc o(n ^ 4)
// sc 2 * O(n * m)
