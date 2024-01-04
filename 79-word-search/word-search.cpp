class Solution {
private:
    bool dfs(vector<vector<char>>& board, vector<vector<int>>& visited,
             string& word, int i, int j, int idx) {
        // base case
        if (idx == word.size())
            return true;

        if (i < 0 || i >= board.size() || j < 0 || j >= board[0].size() ||
            visited[i][j] == 1 || board[i][j] != word[idx]) {
            return false;
        }

        // Marking visited
        visited[i][j] = 1;

        // traversing all side
        bool ls = dfs(board, visited, word, i, j - 1, idx + 1); // left
        bool rs = dfs(board, visited, word, i, j + 1, idx + 1); // right
        bool ds = dfs(board, visited, word, i + 1, j, idx + 1); // down
        bool us = dfs(board, visited, word, i - 1, j, idx + 1); // up

        // Backtracking (If no one is found suitable match)
        visited[i][j] = 0;

        return ls | rs | ds | us;
    }

public:
    bool exist(vector<vector<char>>& board, string word) {
        int n = board.size();
        int m = board[0].size();
        vector<vector<int>> visited(n, vector<int>(m, 0));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {
                if (visited[i][j] == 0 && word[0] == board[i][j]) {
                    if (dfs(board, visited, word, i, j, 0)) {
                        return true;
                    }
                }
            }
        }

        return false;
    }
};

// If it helps plz upvote :)