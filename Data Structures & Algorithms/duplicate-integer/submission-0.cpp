class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        int hmm = nums.size();
        for(int i=0; i<hmm; i++){
            for(int j=i+1; j<hmm; j++){
                if(nums[i]== nums[j]) return true;
                
            }
        }
        return false;
    }
};