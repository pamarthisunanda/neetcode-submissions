class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {

        vector<int> t;

        for(int i = 0; i < trust.size(); i++) {
            t.push_back(trust[i][0]);
        }

        for(int i = 0; i < trust.size(); i++) {

            int c = trust[i][1];

            // Candidate must trust nobody
            if(find(t.begin(), t.end(), c) != t.end())
                continue;

            int count = 0;

            // Count how many people trust candidate
            for(int j = 0; j < trust.size(); j++) {

                if(trust[j][1] == c) {
                    count++;
                }
            }

            // Everyone except candidate must trust them
            if(count == n - 1) {
                return c;
            }
        }

        return -1;
    }
};