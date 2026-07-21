class Solution {
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        int left =1;
        int right= * max_element(piles.begin(), piles.end());
        int ans;
        while(left<=right){
           int k=left+(right-left)/2;
           int n=piles.size();
           int hours=0;
for(int i=0; i<n; i++){
 hours += (piles[i]+k-1)/k;
}



            if(hours<=h){
                ans=k;
                right= k-1;
            }

            else{
                left= k+1;
            }
        }
        return ans;
    }
};
