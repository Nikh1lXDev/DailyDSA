class Solution {
public:

    bool solve(int row, int col, int idx,
               vector<vector<char>>& board,
               string &word) {

        if (idx == word.size())
            return true;

        int m = board.size();
        int n = board[0].size();

        if (row < 0 || row >= m || col < 0 || col >= n)
            return false;

        if (board[row][col] != word[idx])
            return false;

        char ch = board[row][col];
        board[row][col] = '#';

        int dx[] = {0,1,0,-1};
        int dy[] = {1,0,-1,0};

        for (int i = 0; i < 4; i++) {

            int newX = row + dx[i];
            int newY = col + dy[i];

            if (solve(newX, newY, idx + 1, board, word))
                return true;
        }

        board[row][col] = ch;

        return false;
    }

    bool exist(vector<vector<char>>& board, string word) {

        int m = board.size();
        int n = board[0].size();

        for (int i = 0; i < m; i++) {
            for (int j = 0; j < n; j++) {

                if (solve(i, j, 0, board, word))
                    return true;
            }
        }

        return false;
    }
};