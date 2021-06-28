class Solution {
public:
     //One Rotation on the layer
    void rotate(vector<vector<int>>& grid, int l, int& m, int& n)
    {
        //Get the extremes of the layer.
        int is = 0 + l, ie = m-l, js = 0 + l, je = n  -l;

        //Start the rotaion from the first element.
        int i = is, j = js;
        int last = grid[is][js];

        while(++i < ie)
            swap(grid[i][j], last);

        i--;
        while( ++j < je)
            swap(grid[i][j], last);

        j--;
        while(--i >= is)
            swap(grid[i][j], last);

        i++;
        while(--j >= js)
            swap(grid[i][j], last);
    }
    
    
    vector<vector<int>> rotateGrid(vector<vector<int>>& grid, int k) {
        int m = grid.size();
        int n = grid[0].size();
        
        //Do for each layer 
        for(int l = 0; l < min(m / 2, n / 2); l++){
            
            //number of rotations
            int r = k%(2*(m + n - 4*l) - 4); 
            
            //Perform r rotaions.
            for(int t = 0; t < r; t++){
                rotate(grid, l, m, n);                
            }
        }            
        return grid;
    }
};
