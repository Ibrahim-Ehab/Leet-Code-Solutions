class Solution {
public:
    vector<int> countPoints(vector<vector<int>>& points, vector<vector<int>>& queries) {
        vector <int> answer(size(queries));
        for (int c=0;c<queries.size();c++){
            int x=queries[c][0],y=queries[c][1],r=queries[c][2];
            for (int cc=0;cc<points.size();cc++){
                if ((x-points[cc][0])*(x-points[cc][0])+(y-points[cc][1])*(y-points[cc][1])<=r*r){
                    answer[c]++;
                }
            }
        }
        return answer;
    }
};