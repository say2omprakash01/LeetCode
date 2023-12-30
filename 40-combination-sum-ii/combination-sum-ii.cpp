class Solution {
public:
    /*void findCombination(int ind, int target, vector<int>& arr,
                         set<vector<int>>& ans, vector<int>& ds) {
        if (ind == arr.size()) {
            if (target == 0) {
                ans.insert(ds);
            }
            return;
        }
        // pick up the element
        if (arr[ind] <= target) {
            ds.push_back(arr[ind]);
            findCombination(ind + 1, target - arr[ind], arr, ans, ds);
            ds.pop_back();
        }

        findCombination(ind + 1, target, arr, ans, ds);
    }
    vector<vector<int>> combinationSum2(vector<int>& candidates, int target) {
        sort(candidates.begin(), candidates.end());
        set<vector<int>> ans;
        vector<vector<int>> ans1;
        vector<int> ds;
        findCombination(0, target, candidates, ans, ds);

        // Convert set<vector<int>> to vector<vector<int>>
        ans1.assign(ans.begin(), ans.end());

        return ans1;
    }
    */ // Above solution giving TLE
    void help(int ind, int t, vector<int>& c, vector<int>& v,
              vector<vector<int>>& ans) {

        if (t == 0) {
            ans.push_back(v);
            return;
        }

        for (int i = ind; i < c.size(); i++) {
            if (i > ind and c[i] == c[i - 1])
                continue;
            if (c[i] > t)
                break;
            v.push_back(c[i]);
            help(i + 1, t - c[i], c, v, ans);
            v.pop_back();
        }
    }

    vector<vector<int>> combinationSum2(vector<int>& c, int target) {
        sort(c.begin(), c.end());
        vector<vector<int>> ans;
        vector<int> v;
        help(0, target, c, v, ans);
        return ans;
    }
};
