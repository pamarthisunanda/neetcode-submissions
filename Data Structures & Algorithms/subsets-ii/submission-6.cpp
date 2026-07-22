class Solution {
public:

vector<vector<int>> ans;
vector<int >current;

    void bt(int index, vector<int> nums){
        if(index==nums.size()){
            ans.push_back(current);
            return ;
        }

        current.push_back(nums[index]);
        bt(index+1, nums);
        current.pop_back();

        int next=index;
        while(next+1 < nums.size() && nums[next]==nums[next+1]){
            next++;
        }

        bt(next+1, nums);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int index=0;
        bt(0, nums);
        return ans;
    }
};
