class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        set<int> hello;

        int i = 0;

        while (i < nums.size()) {
            if (hello.count(nums[i]))
                return true;

            hello.insert(nums[i]);
            i++;
        }

        return false;
    }
};