class Solution {
public:
    int rob(vector<int>& nums) {

        int n = nums.size();

        if(n == 1){
            return nums[0];
        }

        vector<int> dp(n, 0);

        dp[0] = nums[0];
        dp[1] = max(nums[0], nums[1]);

        for(int idx = 2; idx < n; idx++){

            int pick = nums[idx] + dp[idx - 2];
            int notPick = dp[idx - 1];

            dp[idx] = max(pick, notPick);
        }

        return dp[n - 1];
    }
};