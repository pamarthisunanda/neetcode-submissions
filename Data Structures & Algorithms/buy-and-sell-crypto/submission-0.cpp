class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int right=prices.size()-1;
        int left = right-1;

        int minp=prices[0];
        int maxp=0;

        for(int i=0; i<prices.size(); i++){

         
             if(prices[i]<minp){
                 minp= prices[i];
             }

             else{
                int nmaxp=prices[i]-minp;
                maxp=max(maxp, nmaxp);
             }
           
         

        }

        return maxp;


    }
};
