class Solution {
public:
    int finalValueAfterOperations(vector<string>& operations) {
        int f_x=0;
        for (int c=0;c<operations.size();c++){
            if (operations[c]=="++X" or operations[c]=="X++"){
                f_x+=1;
            }
            else if(operations[c]=="--X" or operations[c]=="X--"){
                f_x-=1;
            }  
        }
        return f_x;
    }
};