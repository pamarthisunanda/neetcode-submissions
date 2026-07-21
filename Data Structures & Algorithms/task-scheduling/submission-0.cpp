class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        unordered_map<char, int> freq;
        priority_queue<int> maxheap;
        queue<pair<int, int>> q;

        for(char task:tasks){
        freq[task]++;
        }

        for(auto it: freq){
            maxheap.push(it.second);
        }

        int time= 0;
       

        while(!maxheap.empty() || !q.empty()){
            time++;


                while(!q.empty() && q.front().second == time){
                    maxheap.push(q.front().first);
                    q.pop();
                }
             if(!maxheap.empty()){
                int freq= maxheap.top();
                maxheap.pop();
                freq--;
             
                if(freq>0){
                    q.push({freq, time+n+1});
                }
             }



             


        }
return time;
    }
};
