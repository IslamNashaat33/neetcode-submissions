class Solution {
public:
    int carFleet(int target, vector<int>& position, vector<int>& speed) {
        stack <pair<int,double>> st;
        vector<pair<int,double>> vec(speed.size());
        for (int i=0;i<speed.size(); i++){
            vec[i]={position[i], (double)(target-position[i])/(double)speed[i]};
        }
        sort(vec.begin(),vec.end());
        for(auto it : vec){
            while (!st.empty() && it.second>= st.top().second)
                st.pop();
            st.push(it);
        }
        return st.size();
    }
};
