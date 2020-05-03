// Sat, 18th April, 2020
class Solution {
public:
    
    int n = 0, m = 0;
    
    int minPathSum(vector<vector<int>>& grid) {
        vector<vector<int>> matrix;
        n = grid.size();
        if (n > 0) m = grid[0].size();
        
        for (int i = 0; i < grid.size(); ++i) {
            vector<int> temp;
            for (int j = 0; j < grid[i].size(); ++j) {
                temp.push_back(-1);
            }
            matrix.push_back(temp);
        }
        
        fill(grid, matrix, 0, 0, 0);
        return matrix[n-1][m-1];        
    }
    
    void fill(vector<vector<int>>& grid, vector<vector<int>>& matrix, int i, int j, int cost) {
        if (matrix[i][j] == -1 || cost + grid[i][j] < matrix[i][j]) {
            matrix[i][j] = cost + grid[i][j];
            if (i < n - 1) fill(grid, matrix, i + 1, j, matrix[i][j]);
            if (j < m - 1) fill(grid, matrix, i, j + 1, matrix[i][j]);
        }
    }
};
