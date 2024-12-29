class Solution {
public:
    int minimumOperations(vector<vector<int>>& grid) {
        int s = 0;
for (int i = 0; i <grid[0].size() ; i++) {
    for (int j = 0; j < grid.size()-1; j++) {
        if (grid[j + 1][i] - grid[j][i]  <= 0) {
            s += -grid[j + 1][i] + grid[j][i] + 1; 
            grid[j + 1][i] = grid[j][i] + 1;
        }
    }
}
return s;
}        
}; 


//Implemented minimumOperations to ensure grid columns are strictly increasing.
//Traverses each column and adjusts values to satisfy the condition.
//Returns the total number of operations required.
//Handles in-place updates to the grid for efficiency.
//Time complexity: 𝑂(𝑛⋅𝑚), where n is rows and m is columns.
//The function operates in-place on grid, so the space complexity is O(1), excluding the input and output.