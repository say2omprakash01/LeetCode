class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& in) {
        sort(in.begin() , in.end()) ; 
        int n = in.size();
        vector<vector<int>> ans;
        int i = 0, j = 0;
        while (i < n) {
            // Check if there's an overlap with the next interval
            while (i < n - 1 && in[i][1] >= in[i + 1][0]) {
                // in[i + 1][0] = min(in[i][0], in[i + 1][0]);
                 in[i + 1][1] = max(in[i][1], in[i + 1][1]);
                i++;
            }
            // Add the merged interval to the result
            ans.push_back({in[j][0], in[i][1]});
            // Move to the next non-overlapping interval
            i++;
            j = i;
        }
        return ans;
    }
};
