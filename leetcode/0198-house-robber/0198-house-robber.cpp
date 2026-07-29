class Solution {
public:
    int findAns(int idx, vector<int>& nums,vector<int>& dp) {
        if(idx<0){
            return 0;
        }
        if(dp[idx]!=-1){
            return dp[idx];
        }
        int rob=nums[idx] + findAns(idx - 2 , nums, dp);
        int notrob=findAns(idx - 1, nums, dp);

        return dp[idx]=max(rob, notrob);
    }
    int rob(vector<int> & nums){
        int n=nums.size();
        vector<int> dp(n+1,-1);
        return findAns(n - 1, nums,dp);
    }
};