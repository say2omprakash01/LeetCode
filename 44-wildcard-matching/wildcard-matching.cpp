class Solution {
public:
    bool isAllStars(string &S1, int i) {
     for (int j = 1; j <= i; j++) {
         if (S1[j - 1] != '*')
            return false;
     }
     return true;
    }

    bool isMatch(string S2, string S1) {
        int n = S1.size();
        int m = S2.size();

    // Create a DP table to memoize results
    vector<vector<bool>> dp(n + 1, vector<bool>(m+1, false));

    // Initialize the first row and column
    dp[0][0] = true;
    for (int j = 1; j <= m; j++) {
        dp[0][j] = false;
    }
    for (int i = 1; i <= n; i++) {
        dp[i][0] = isAllStars(S1, i);
     }

    // Fill in the DP table
    for (int i = 1; i <= n; i++) {
        for (int j = 1; j <= m; j++) {
            if (S1[i - 1] == S2[j - 1] || S1[i- 1] == '?') {
                dp[i][j] = dp[i - 1][j - 1];
            } else {
                if (S1[i - 1] == '*') {
                    dp[i][j] = dp[i - 1][j] || dp[i][j - 1];
                } else {
                    dp[i][j] = false;
                }
            }
        }
    }

    // The value at dp[n][m] contains whether S1 matches S2
       return dp[n][m];
    }
};