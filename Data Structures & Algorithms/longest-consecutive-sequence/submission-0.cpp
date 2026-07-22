class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        unordered_set<int> s;
        int longest =0;
        int length=1;
        for(int num:nums){
            s.insert(num);
        }

        for(int num:nums){
            if(s.find(num-1)==s.end()){
            int current=num;
            
            while(s.find(current+1) != s.end()){
               current ++; 
               length ++;
            }
            longest=max(longest, length);
            }
           
        }
return longest;

    }
};
