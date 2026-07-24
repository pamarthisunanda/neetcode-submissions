class Solution {
public:
vector<vector <string>> ans;
string curr;

vector<string> mp={
    "",
    "",
    "abc",
    "def",
    "ghi",
    "jkl",
    "mno",
    "pqrs",
    "tuv",
    "wxyz"

};

void dfs(int index, string &digits){
    if(index==digits.size()){
        ans.push_back(curr);
        return;
    }

    string letters= mp[digits[index]-'0'];

    for(char ch: letters){
        curr.push_back(ch);
        dfs(index+1, digits);
        curr.pop_back();
    }
}
    vector<string> letterCombinations(string digits) {
        if(digits.empty()){
            return {};
        }

        dfs(0, digits);
        return ans;
    }
};
