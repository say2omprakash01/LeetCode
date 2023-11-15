class Solution {
public:
    int maxSumAfterPartitioning(vector<int>& num, int k) {
        int n = num.size();
    
        // Create a DP array to store the maximum sum.
        vector<int> dp(n + 1, 0);
        
        // Iterate through the array from right to left.
        for (int ind = n - 1; ind >= 0; ind--) {
            int len = 0;
            int maxi = INT_MIN;
            int maxAns = INT_MIN;
            
            // Loop through the next k elements (or remaining elements if k is smaller).
            for (int j = ind; j < min(ind + k, n); j++) {
                len++;
                maxi = max(maxi, num[j]);
                int sum = len * maxi + dp[j + 1];
                maxAns = max(maxAns, sum);
            }
            
            // Store the computed maximum sum in the DP array.
            dp[ind] = maxAns;
        }
        
        // The maximum sum after partitioning the entire array is stored in dp[0].
        return dp[0];
    }
};