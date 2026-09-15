class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {

        vector<pair<int, int>> nums2;

        for (int k = 0; k < nums.size(); k++) {
            nums2.push_back({nums[k], k});
        }

        sort(nums2.begin(), nums2.end());

        int i = 0;
        int j = nums2.size() - 1;

        while (i < j) {

            int sum = nums2[i].first + nums2[j].first;

            if (sum == target)
                break;

            if (sum < target)
                i++;
            else
                j--;
        }

        vector<int> ans = {
            nums2[i].second,
            nums2[j].second
        };

        sort(ans.begin(), ans.end());

        return ans;
    }
};