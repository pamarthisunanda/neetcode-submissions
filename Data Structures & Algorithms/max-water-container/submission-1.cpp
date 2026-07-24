class Solution {
public:
    int maxArea(vector<int>& heights) {
        int left=0;
        int right = heights.size()-1;

        int area= min(heights[left], heights[right])* (right-left);
        while(left<right){
            if(heights[left]< heights[right]){
                left++;
            }
            else{
                right--;
            }

            int newa=min(heights[left], heights[right])* (right-left);

            area = max(area, newa);
        }

        return area;
    }
};
