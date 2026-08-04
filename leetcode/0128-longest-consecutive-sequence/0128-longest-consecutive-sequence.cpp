class Solution {
public:
    int longestConsecutive(vector<int>& nums) {

        unordered_set<int> st(nums.begin(), nums.end());

        int longest = 0;

        for (int x : st) {

            // Check if x is the start of a sequence
            if (st.count(x - 1) == 0) {

                int length = 1;

                while (st.count(x + length)) {
                    length++;
                }

                longest = max(longest, length);
            }
        }

        return longest;
    }
};