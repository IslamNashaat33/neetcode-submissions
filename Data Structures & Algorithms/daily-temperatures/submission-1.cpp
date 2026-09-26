class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temps) {
        priority_queue<pair<int,int>> pq;
        vector <int> result (temps.size(),0);
        pq.push({-temps[0],0});
        for (int i=1 ; i< temps.size(); i++){
            while (!pq.empty() && temps[i] > -pq.top().first){
                result[pq.top().second]=i -pq.top().second ;
                pq.pop();
            }
            pq.push({-temps[i],i});
        }
        return result;
    }
};
