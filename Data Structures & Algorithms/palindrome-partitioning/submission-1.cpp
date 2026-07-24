class Solution {
public:
vector<vector<string>> ans;
vector<string> & curr;

bool ispal(string &s, int left, int right){
    while(left<right){
        if(s[left]!=s[right]) return false;
        left++;
        right--;
    }
    return true;
}

void dfs(int start, string &s ){
    if(start==s.size()){
        ans.push_back(curr);
        return;
    }

    for(int end=start; end<s.size(); end++){
        string part = s.substr(start, end - start + 1);
        if (ispal(part, start, end)) {
    current.push_back(part);
    dfs(end + 1);
    current.pop_back();
}

    }
}

    vector<vector<string>> partition(string s) {
        dfs(0, s);
        return ans;
    }
};
