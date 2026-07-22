class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int left=0;
        int right=0;

        unordered_set<char>win;
        int length=1;
        int maxl;
        for(int right=0; right<s.size(); right++){
            while(win.count(s[right])){
            win.erase(s[left]);
            left++;
        }
        win.insert(s[right]);
        length=right-left+1;

        maxl=max(length, maxl);

        }
       return maxl; 
    }
};
