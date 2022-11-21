class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int nn=grid.size();
        int ans=0;
        vector<int>row(nn,0),col(nn,0);
        for(int r=0;r<nn;r++){
            for (int c=0;c<nn;c++){
                row[r]=max(row[r],grid[r][c]);
                col[c]=max(col[c],grid[r][c]);
            }
        }
        for(int r=0;r<nn;r++){
            for (int c=0;c<nn;c++){
                ans+=(min(row[r],col[c])-grid[r][c]);
            }
        }
        return ans;
    }
};