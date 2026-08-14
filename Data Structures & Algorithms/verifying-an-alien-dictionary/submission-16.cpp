class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        
        vector<int> rank(26);

        for(int i=0; i<26; i++){
            rank[order[i]-'a']=i;
        }

        for(int j=0; j<words.size()-1; j++){
            string words1=words[j];
            string words2=words[j+1];

         for(int i=0; i<min(words1.size(), words2.size());i++){
            if(words1[i]==words2[i]){
                continue;
            }

            return rank[words1[i]-'a']<rank[words2[i]-'a'];
                
               
             }
      if(words1.size()>words2.size()){
                return false;
            }
        }

       


        return true;
    }
};