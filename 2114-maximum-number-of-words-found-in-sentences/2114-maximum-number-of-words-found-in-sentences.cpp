class Solution {
public:
    int mostWordsFound(vector<string>& sentences) {
        int answer=0;
        for(int c=0;c<sentences.size();c++){
            int temp=1;
            for (int cc=1;cc<sentences[c].size();cc++){
                if (sentences[c][cc]==' ') temp++;
                
            }
            answer=max(answer,temp);
        }
        return answer;
    }
};