class Solution {
public:
    int numIdenticalPairs(vector<int>& nums) {
        int ngood_pairs=0;
            for (int c=0;c<nums.size();c++){
                for ( int cc=1;cc<nums.size();cc++){
                    if (nums[c]==nums[cc] and c<cc){
                        ngood_pairs+=1;
                    }
                }
            }
        return ngood_pairs ;
    }
        
};