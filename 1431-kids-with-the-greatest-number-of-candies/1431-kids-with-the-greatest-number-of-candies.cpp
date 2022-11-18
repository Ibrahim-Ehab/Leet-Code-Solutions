class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int greatest = *max_element(candies.begin(),candies.end());
        vector<bool> answer;
        for (int c=0;c<candies.size();c++){
            if(candies[c]+extraCandies>=greatest){
                answer.push_back(true);
            }
            else{
                answer.push_back(false);
            }
        }
        return answer;
    }
};