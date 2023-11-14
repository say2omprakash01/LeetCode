class Solution {
public:
    int countPalindromicSubsequence(string s) {
        int res = 0;
        unordered_set<char> unique;

        for (char c : s) {
            unique.insert(c);
        }

        for (char c : unique) {
            int start = s.find(c);
            int end = s.rfind(c);

            if (start < end) {
                unordered_set<char> st;
                for (int i = start + 1; i < end; i++) {
                    st.insert(s[i]);
                }
                res += st.size();
            }
        }

        return res;
    }
};