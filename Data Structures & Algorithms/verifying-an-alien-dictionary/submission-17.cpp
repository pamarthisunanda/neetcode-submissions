class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {

        vector<int> rank(26);

        for(int i = 0; i < 26; i++) {
            rank[order[i] - 'a'] = i;
        }

        for(int j = 0; j < words.size() - 1; j++) {

            string& word1 = words[j];
            string& word2 = words[j + 1];

            for(int i = 0; i < min(word1.size(), word2.size()); i++) {

                if(word1[i] == word2[i]) {
                    continue;
                }

                // First different character decides everything
                return rank[word1[i] - 'a'] <
                       rank[word2[i] - 'a'];
            }

            // We reached here only if all common characters matched
            if(word1.size() > word2.size()) {
                return false;
            }
        }

        return true;
    }
};