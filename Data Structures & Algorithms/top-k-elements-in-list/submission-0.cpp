class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        unordered_map<int, int> count;

        // Count frequency
        for (int num : nums) {
            count[num]++;
        }

        // Bucket by frequency
        vector<vector<int>> bucket(nums.size() + 1);

        for (auto& pair : count) {
            int num = pair.first;
            int freq = pair.second;

            bucket[freq].push_back(num);
        }

        // Get the most frequent
        vector<int> ans;

        for (int i = bucket.size() - 1; i >= 0; i--) {

            for (int num : bucket[i]) {
                ans.push_back(num);

                if (ans.size() == k)
                    return ans;
            }
        }

        return ans;
    }
};