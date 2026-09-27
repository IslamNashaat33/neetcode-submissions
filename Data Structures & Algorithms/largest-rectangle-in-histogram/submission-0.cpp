class Solution {
public:
    int largestRectangleArea(vector<int>& heights) {
        priority_queue<pair<int,int>>pq;
        int result=0;
        for(int i=0 ; i<heights.size(); i++){
            int lindex = i;
            while (!pq.empty() && heights[i]< pq.top().first){
                lindex = pq.top().second;
                int area = pq.top().first * (i - pq.top().second);
                result = max (area,result);
                pq.pop();
            }
            if (heights[i]==0) continue;
            pq.push({heights[i], lindex});

        }
        int size = heights.size();
        while (!pq.empty()){
            result = max (result, pq.top().first * (size -pq.top().second));
            pq.pop();
        }


        return result;
    }
};
