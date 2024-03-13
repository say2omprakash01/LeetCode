class Solution {
public:
    int pivotInteger(int n) {
        if (n == 1) return n;

        vector<int> prefix(n);
        vector<int> suffix(n);
        prefix[0] = 1;
        suffix[n - 1] = n;

        for (int i = 1; i < n; i++) {
            prefix[i] = prefix[i - 1] + i + 1;
        }

        for (int i = n - 2; i >= 0; i--) {
            suffix[i] = suffix[i + 1] + i + 1;
        }

        for (int i = 1; i < n - 1; i++) {
            if (prefix[i - 1] == suffix[i + 1]) return i + 1;
        }

        return -1;
    }
};
