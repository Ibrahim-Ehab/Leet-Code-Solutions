class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> sh_arr;
        for (int c=0;c<(nums.size()/2);c++){
            sh_arr.insert(sh_arr.end(),nums[c]);
            sh_arr.insert(sh_arr.end(),nums[c+n]);
        }
        return sh_arr;
    }
};