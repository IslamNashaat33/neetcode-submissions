class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temps) {
        stack<pair<int,int>> st;
        vector<int> result(temps.size(),0);
        for(int i =0 ;i<temps.size(); i++){
            while (!st.empty()&& st.top().first < temps[i] ){
                result[st.top().second] = i -st.top().second;
                st.pop();
            } 
            st.push({temps[i],i});
        }
        return result;
    }
};
