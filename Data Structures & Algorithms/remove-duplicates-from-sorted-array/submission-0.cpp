class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        int writer=1;
        for(int reader=1; reader<nums.size(); reader++){
            if(nums[reader]!=nums[writer-1]){
                nums[writer]=nums[reader];
                writer++;

            }
        }
        return writer;
    }
};