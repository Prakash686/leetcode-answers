class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int x = grid.size();
        vector<int>answer;
        vector<int>freq(x*x+1,0);
        for(auto num:grid){
            for(int val:num){
                freq[val]++;

            }
           
        }
        int repeated_val = -1;
        int missed_val = -1;
        for(int i=1;i<x*x+1;i++){
            if (freq[i]==2){
                repeated_val = i;
               
            }
            if(freq[i]==0){
                missed_val = i;
            }
        }
        answer.push_back(repeated_val);
        answer.push_back(missed_val);
        return answer;
    }


};