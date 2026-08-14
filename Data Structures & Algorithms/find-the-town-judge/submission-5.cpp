class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> t;
        for(int i=0; i<trust.size() ; i++){
            t.push_back(trust[i][0]);
        }

        for(int i=0; i<trust.size(); i++){
            int c=trust[i][1];

            int count = 0;

           for(int j = 0; j < trust.size(); j++) {
              if(trust[j][1] == c) {
              count++;
                 }

                    if(count == n - 1) return c;
            }else return -1;
        
    }

    
};