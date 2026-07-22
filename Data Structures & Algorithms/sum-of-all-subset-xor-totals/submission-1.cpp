class Solution {
public:

     int ans ;

    void bt(int index, int curxor, vector<int>&nums){
   
   
    
       if(index==nums.size()){
          ans +=curxor;
          return;
        }

   
       bt(index+1, curxor^nums[index], nums);

       bt(index+1, curxor, nums);
 
        return;

     }
    int subsetXORSum(vector<int>& nums) {
        int index=0;
        int curxor=0;
        ans=0;
        bt(0, 0, nums);
        return ans;
    }
    
};