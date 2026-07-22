class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        priority_queue<int> maxheap;
        for(int stone :stones){
            maxheap.push(stone);
        }

        while(maxheap.size()!=1){
            int y=maxheap.top();
        maxheap.pop();

        int x=maxheap.top();
        maxheap.pop();

        if(x==y) continue;

        if(x<y){
            maxheap.push(y-x);
        }

         if(y<x){
            maxheap.push(x-y);
        }

        }

        

return maxheap.top();


        
    }
};
