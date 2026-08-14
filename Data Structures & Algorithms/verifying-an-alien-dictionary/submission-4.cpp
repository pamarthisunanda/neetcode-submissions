class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        
        vector<int> rank(26);

        for(int i=0; i<26; i++){
            rank[order[i]-'a']=i;
        }

        for(int i=0; i<words.size(); i++){
            string words1=words[i];
            string words2=words[i+1];
            
            if(words1[i]==words2[i]){
                continue;
            }

            else if(words1[[i]-'a']<words2[[i]-'a']){
                continue;
            }

            else{
                return false;
            }

            if(words1.size()>words2.size()){
                return false;
            }

        
        }

        return true;
    }
};