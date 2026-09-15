class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& temperatures) {
        vector<int> res(temperatures.size(),0);
        stack <pair< int,pair<int,int>> > st;
        for (int i=0 ; i < res.size() ; i++){
            int j=1;
            while (!st.empty() && temperatures[i] > st.top().first){
                res[st.top().second.first] = j;
                j+= st.top().second.second+1;
                st.pop();
            }
            st.push({temperatures[i],{i,j-1}});
        }
        return res;
    }
};
