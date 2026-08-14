class Solution {
public:
    int findJudge(int n, vector<vector<int>>& trust) {
        vector<int> t;
        for(int i=0; i<trust.size() ; i++){
            t.push_back(trust[i][0]);
        }

        for(int i=0; i<trust.size(); i++){
            int c=trust[i][1];

            if(find(t.begin(), t.end(), c)== t.end()){
                return c;
            }
        }

        if(!t.empty()){

        }
        else{
            return -1;
        }
    }

    return 0;
};