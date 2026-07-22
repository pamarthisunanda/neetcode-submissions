class Solution {
public:

vector<vector<int>> ans;
vector<int > current;

    void bt(int index, int rt, vector<int> &nums){
        if(rt==0){
            ans.push_back(current);
            return;
        }

        if(rt<0) return ;

        if(index==nums.size() && rt!=0){
            
            return;
        }

        current.push_back(nums[index]);
        bt(index, rt-nums[index], nums);
        current.pop_back();

        bt(index+1, rt, nums);



    }

    vector<vector<int>> combinationSum(vector<int>& nums, int target) {
        int index=0;
      
        bt(0, target, nums);
        return ans;
    }
};
