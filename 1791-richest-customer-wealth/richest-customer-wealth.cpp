class Solution {
public:
    int maximumWealth(vector<vector<int>>& accounts) {
        int res = 0 ; 
        for(auto i : accounts){
            int ans = accumulate(i.begin(), i.end(), 0);
            res=max(res , ans) ; 
        }
        return res ; 
    }
};