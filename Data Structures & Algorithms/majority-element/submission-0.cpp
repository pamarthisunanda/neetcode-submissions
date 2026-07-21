class Solution {
public:
    int majorityElement(vector<int>& nums) {
        
        int n=nums.size();
        int maj=n/2;
        unordered_map<int, int> ans;
        for(int num: nums){
            ans[num]++;
            if(ans[num]>maj) return num;

        }
       
    }
};