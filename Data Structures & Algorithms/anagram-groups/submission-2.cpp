class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        vector<pair<string, int>> strs2;

        for (int i = 0; i < strs.size(); i++) {

            string s = strs[i];

            sort(s.begin(), s.end());

            strs2.push_back({s, i});
        }

        sort(strs2.begin(), strs2.end());

        vector<vector<string>> ans;

        int i = 0;

        while (i < strs2.size()) {

            vector<string> group;

            int j = i;

            while (j < strs2.size() &&
                   strs2[j].first == strs2[i].first) {

                group.push_back(strs[strs2[j].second]);

                j++;
            }

            ans.push_back(group);

            i = j;
        }

        return ans;
    }
};