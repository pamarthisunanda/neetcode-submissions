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

        for(int i=index; i<nums.size(); i++){
            if(i>index && nums[i]==nums[i-1]) continue;

            current.push_back(nums[i]);
        bt(i+1, rt-nums[i], nums);
        current.pop_back();

        bt(i+1, rt, nums);
        }

        



    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        int index=0;
      
        bt(0, target, candidates);
        return ans;
    }
};
