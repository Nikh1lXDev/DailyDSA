class Solution {
public:

    void help(int idx, vector<int>& nums, vector<int>& temp,
              vector<vector<int>>& ans) {

        if (idx == nums.size()) {
            ans.push_back(temp);
            return;
        }
        temp.push_back(nums[idx]);
        help(idx +1, nums, temp, ans);
        temp.pop_back();

        while (idx+ 1 < nums.size() && nums[idx] == nums[idx + 1])
            idx++;

        help(idx + 1, nums, temp, ans);
    }
    vector<vector<int>> subsetsWithDup(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        vector<vector<int>> ans;
        vector<int> temp;
        help(0, nums, temp, ans);
        return ans;
    }
};