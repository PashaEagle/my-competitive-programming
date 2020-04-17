// Fri, 17th April, 2020
class Solution {
public:
    
    int color = 2, n = 0, m = 0;
    
    int numIslands(vector<vector<char>>& grid) {
        
        n = grid.size(); if (n > 0) m = grid[0].size();
        
        for (int i = 0; i < n; ++i){
            for (int j = 0; j < m; ++j){
                if (grid[i][j] == '1') 
                {
                    // cout << i << ' ' << j << endl;
                    fill(grid, i, j);
                    ++color;
                }
            }
        }
        
        return color - 2;
    }
    
    
    void fill(vector<vector<char>>& grid, int i, int j) {
        if (grid[i][j] == '1')
        {
            grid[i][j] = 'a';
            if (i > 0)      fill(grid, i - 1, j);
            if (j > 0)      fill(grid, i, j - 1);
            if (i < n - 1)  fill(grid, i + 1, j);
            if (j < m - 1)  fill(grid, i, j + 1);
        }
    }
};
