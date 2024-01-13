class Solution {
public:
    int sum = 0;
    int numberOfArithmeticSlices(vector<int>& A) {
        vector<int> dp(A.size());
        int sum = 0;
        for (int i = 2; i < dp.size(); i++) {
            if (A[i] - A[i - 1] == A[i - 1] - A[i - 2]) {
                dp[i] = 1 + dp[i - 1];
                sum += dp[i];
            }
        }
        return sum;
    }
};