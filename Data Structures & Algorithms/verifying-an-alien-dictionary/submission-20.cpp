class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {

        vector<int> rank(26);

        for (int i = 0; i < 26; i++) {
            rank[order[i] - 'a'] = i;
        }

        for (int j = 0; j < words.size() - 1; j++) {

            string& word1 = words[j];
            string& word2 = words[j + 1];

            int len = min(word1.size(), word2.size());

            for (int i = 0; i < len; i++) {

                if (word1[i] == word2[i])
                    continue;

                if (rank[word1[i] - 'a'] < rank[word2[i] - 'a'])
                    break;

                return false;
            }

            if (word1.size() > word2.size())
                return false;
        }

        return true;
    }
};