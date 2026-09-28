class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int l=0, r= numbers.size()-1;
        int sum =numbers[l]+ numbers[r];
        while (true){
            if (sum < target) l++;
            if (sum > target) r--;
            if (sum == target) break;
            sum = numbers[l]+ numbers[r];
        }
        vector<int> ans= {l+1, r+1};
        return ans;
    }
};
