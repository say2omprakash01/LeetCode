class Solution {
public:
    int coinChange(vector<int>& coins, int t) {
        int n = coins.size() ; 
        vector<int> prev(t+1 , 0) , cur(t+1 , 0) ; 
        for(int i = 0 ; i<=t ; i++){
            if(i%coins[0]==0) prev[i] = i/coins[0] ; 
            else prev[i] = 1e9 ; 
        }
        for(int ind =1 ; ind<n ; ind++){
            for(int target = 0 ; target<=t ; target++){
                int ntake = prev[target] ; 
                int take = 1e9 ; 
                if(coins[ind]<=target)
                 take = 1+cur[target-coins[ind]] ; 
                cur[target] = min(ntake , take) ;  
            }
            prev = cur ; 
        }
        int ans = prev[t] ; 
        if(ans>=1e9) return -1 ; 
        return ans ; 
    }
};