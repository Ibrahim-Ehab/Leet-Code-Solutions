class Solution {
public:
    vector<int> buildArray(vector<int>& nums) {
        vector<int> ans;
        for (int c=0;c<nums.size();c++){
            ans.insert(ans.end(),nums[nums[c]]);
        }
        return ans;
    }
};