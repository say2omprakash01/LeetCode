class Solution {
public:
    void numRec(vector<vector<char>> &grid , int i , int j , int row , int col)
    {
    if(i<0 || j <0 || i>(row - 1) || j > (col -1 ) || grid[i][j] != '1')
    {
        return ;
    }
    
    if(grid[i][j] == '1')
    {
        grid[i][j] = '0' ;
        numRec(grid,  i+1 , j , row , col);
        numRec(grid, i-1 , j , row , col);
        numRec(grid, i , j+1 , row , col);
        numRec(grid, i , j-1 , row , col);
        // numRec(grid, i+1 , j+1 , row , col);
        // numRec(grid, i+1 , j-1 , row , col);
        // numRec(grid, i-1 , j+1 , row , col);
        // numRec(grid, i-1 , j-1 , row , col);
    }
    }
     int numIslands(vector<vector<char>>& grid) {
        int count = 0 ;
        int row = grid.size() ;
        int col = grid[0].size() ;
        for(int i = 0 ; i< row ; i++){
            for(int j = 0 ; j<col ; j++){
                if(grid[i][j] == '1' ){
                    count++;
                numRec(grid , i , j , row , col);
                 
                }
            }
        }
     return count ;
     }
};