class Solution {
public:
    bool isAlienSorted(vector<string>& words, string order) {
        vector<int> pos(26);

        // Store the position of each character in the alien alphabet
        for (int i = 0; i < 26; i++)
            pos[order[i] - 'a'] = i;

        // Compare every adjacent pair of words
        for (int i = 0; i < words.size() - 1; i++) {
            string &w1 = words[i];
            string &w2 = words[i + 1];

            int j = 0;

            // Compare characters until they differ or one word ends
            while (j < w1.size() && j < w2.size() && w1[j] == w2[j])
                j++;

            // If all characters matched, longer word should not come first
            if (j == w2.size() && w1.size() > w2.size())
                return false;

            // If characters differ, check their order
            if (j < w1.size() && j < w2.size() &&
                pos[w1[j] - 'a'] > pos[w2[j] - 'a'])
                return false;
        }

        return true;
    }
};