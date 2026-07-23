class Solution {
public:

string current;
vector<string> ans;

void bt(int left, int right, int n){

    if(current.size()== 2*n){
        ans.push_back(current);
        return;
    }
    if(left<n){
        current+='(';
    bt(left+1, right, n);
    current.pop_back();
    }

    if(right<left){
        current+= ')';
        bt(left, right+1, n);
    current.pop_back();
    }

    
}
    vector<string> generateParenthesis(int n) {
        int left=0; 
        int right=0;
        bt(0, 0, n);
        return ans;
        
    }
};
