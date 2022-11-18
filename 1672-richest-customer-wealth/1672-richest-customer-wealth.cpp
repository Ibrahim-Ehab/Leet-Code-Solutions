class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int threshold,wealth=0;
        vector <int> tacc;
        for (int c=0; c<accounts.size();c++){
            tacc=accounts[c];
            threshold= accumulate(tacc.begin(),tacc.end(),0);
            if (threshold>wealth)
                wealth=threshold;
            
        }
        
        
        
        return wealth;
        
    }
};