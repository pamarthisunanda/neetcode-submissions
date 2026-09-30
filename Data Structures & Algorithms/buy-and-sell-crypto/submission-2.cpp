class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int minprice=prices[0];
        int maxp=0;

        for(int i=1; i<prices.size(); i++){
            int pro=prices[i]-minprice;
            maxp=max(pro, maxp);
            minprice=min(minprice, prices[i]);
        }
        return maxp;
    }
};
