class WordDictionary {
public:

    struct Node {
        Node* child[26];
        bool isWord;

        Node() {
            isWord = false;

            for(int i = 0; i < 26; i++) {
                child[i] = nullptr;
            }
        }
    };

    Node* root;

    WordDictionary() {
        root = new Node();
    }

    void addWord(string word) {

        Node* curr = root;

        for(char c : word) {

            int index = c - 'a';

            if(curr->child[index] == nullptr) {
                curr->child[index] = new Node();
            }

            curr = curr->child[index];
        }

        curr->isWord = true;
    }


    bool dfs(Node* node, string& word, int i) {

        // Reached the end of the search word
        if(i == word.size()) {
            return node->isWord;
        }

        char c = word[i];

        // Normal letter
        if(c != '.') {

            int index = c - 'a';

            if(node->child[index] == nullptr) {
                return false;
            }

            return dfs(node->child[index], word, i + 1);
        }


        // '.' means ANY letter
        for(int j = 0; j < 26; j++) {

            if(node->child[j] != nullptr) {

                if(dfs(node->child[j], word, i + 1)) {
                    return true;
                }
            }
        }

        return false;
    }


    bool search(string word) {
        return dfs(root, word, 0);
    }
};