class Solution {
public:
    bool canBeIncreasing(vector<int>& nums) {
        bool flag=false;
        for (int c=1;c<nums.size();c++)
        {
            for(int cc=0;cc<c;cc++)
            {
                if(nums[c]<=nums[cc])
                {
                    if(!flag){
                        nums[cc]=-1;
                        flag=true;
                            break;
                    }
                    else{
                        return false;
                    }
                }
            }
        }
        return true;
    }
};