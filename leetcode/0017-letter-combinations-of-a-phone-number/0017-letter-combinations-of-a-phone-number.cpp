class Solution {
public:

    vector<string> mp = {
        "", "", "abc", "def", "ghi",
        "jkl", "mno", "pqrs", "tuv", "wxyz"
    };

    void help(int idx, string& digits, string& temp, vector<string>& ans) {

        if (idx == digits.size()) {
            ans.push_back(temp);
            return;
        }

        string letters = mp[digits[idx] - '0'];

        for (char ch : letters) {
            temp.push_back(ch);
            help(idx + 1, digits, temp, ans);
            temp.pop_back();
        }
    }

    vector<string> letterCombinations(string digits) {

        vector<string> ans;

        if (digits.empty())
            return ans;

        string temp;

        help(0, digits, temp, ans);

        return ans;
    }
};