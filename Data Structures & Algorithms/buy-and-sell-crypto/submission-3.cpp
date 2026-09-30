class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int left=0; 
        int right=1;
        int maxp=0;

        while(right<prices.size()){
            if(prices[right]>prices[left]){
                int p=prices[right]-prices[left];
                maxp=max(maxp,p);
                
            }
            else(left=right);
            right++;
        }
        return maxp;
    }
};
