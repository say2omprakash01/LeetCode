class Solution {
public:
    int minSteps(string s, string t) {
        if (s == t)
            return 0;

        int n = s.length(), ans = 0;
        vector<int> arr(26, 0);
        vector<char> sc(s.begin(), s.end());
        vector<char> tc(t.begin(), t.end());

        for (int i = 0; i < n; i++) {
            arr[sc[i] - 'a']++;
            arr[tc[i] - 'a']--;
        }

        for (int i : arr)
            if (i > 0)
                ans += i;

        return ans;
    }
};
