class Solution {
public:
vector<vector<int>> ans;
vector<int> current;
vector<bool> used;

void bt(vector<int>& nums, vector<bool>& used){
    if(current.size()==nums.size()){
        ans.push_bacj(current);
        return ;
    }

    for(int i=0; i<nums.size; i++){

        if(used[i]==true) continue;

        current.push_back(nums[i]);
        used[i]=true;
        bt(nums, used);
        used[i]=false;
        current.pop_back();
    }
}
    vector<vector<int>> permute(vector<int>& nums) {
        bt(nums, used);
        return ans;
    }
};
