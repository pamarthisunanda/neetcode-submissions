class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        
        vector<int> rank(26);

        for(int i=0; i<26; i++){
            rank[order[i]-'a']=i;
        }

        for(int i=0; i<26; i++){
            if(word1[i]==word2[i]){
                continue;
            }

            else if(word1[[i]-'a']<word2[[i]-'a']){
                continue;
            }

            else{
                return false;
            }

            if(word1.size()>word2.size()){
                return false;
            }

        
        }

        return true;
    }
};