class SubrectangleQueries {
    vector<vector<int>> rec;
    vector<vector<int>> updates;
    vector<int>cor;
public:
    SubrectangleQueries(vector<vector<int>>& rectangle) {
        rec=rectangle;
        cor={0,0,0,0,0};
    }
    
    void updateSubrectangle(int row1, int col1, int row2, int col2, int newValue) {
        cor[0]=row1;
        cor[1]=row2;
        cor[2]=col1;
        cor[3]=col2;
        cor[4]=newValue;
        updates.push_back(cor);
        
    }
    
    int getValue(int row, int col) {
        for (int c=updates.size()-1;c>=0;c--){
            if (row>=updates[c][0]&&row<=updates[c][1]&&col>=updates[c][2]&&col<=updates[c][3])
                return updates[c][4];
        }
        return rec[row][col];
    }
};

/**
 * Your SubrectangleQueries object will be instantiated and called as such:
 * SubrectangleQueries* obj = new SubrectangleQueries(rectangle);
 * obj->updateSubrectangle(row1,col1,row2,col2,newValue);
 * int param_2 = obj->getValue(row,col);
 */