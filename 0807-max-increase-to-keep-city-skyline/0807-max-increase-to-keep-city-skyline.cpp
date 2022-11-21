class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        // define limit for loops and create the max skyline
        int nn=grid.size();
        int ans=0;
        // create vectors for rows and columns which contains zeros for grid size dimension
        vector<int>row(nn,0),col(nn,0);
        //make new grid with updated hights
        for(int r=0;r<nn;r++){
            for (int c=0;c<nn;c++){
                row[r]=max(row[r],grid[r][c]);
                col[c]=max(col[c],grid[r][c]);
            }
        }
        //calculate the values which we added to old hights 
        for(int r=0;r<nn;r++){
            for (int c=0;c<nn;c++){
                ans+=(min(row[r],col[c])-grid[r][c]);
            }
        }
        return ans;
    }
};