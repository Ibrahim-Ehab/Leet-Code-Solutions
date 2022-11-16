class Solution {
public:
    vector<int> getConcatenation(vector<int>& nums) {
        vector <int> ans;
        ans=nums;
        for(int c=0;c<nums.size();c++){
            ans.insert(ans.end(),nums[c]);
        }
        return ans;
        
    }
};