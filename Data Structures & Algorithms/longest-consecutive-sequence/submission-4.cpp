class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int mx=0;
        int cur=1;
        for (int i=1; i< nums.size() ;i++){
            if (nums[i]-1 == nums[i-1]){
                cur ++;
            }
            else if (nums[i]== nums[i-1]){
                continue;
            }
            else {
                mx = max(cur,mx);
                cur =1;
            }
        }
        mx = max(cur,mx);

return nums.empty() ? 0 : mx;
    }
};
