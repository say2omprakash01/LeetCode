class Solution {
public:
    int help(vector<int>& coins ,int ind ,  int amount ,vector<vector<int>> &dp){
        if(ind==0){
            return (amount%coins[0]==0); 
        }
        if(dp[ind][amount] != -1) return dp[ind][amount] ; 
        int ntake = help(coins , ind-1 , amount , dp) ; 
        int take = 0 ; 
        if(coins[ind]<=amount) take = help(coins , ind, amount-coins[ind] , dp) ;

        return dp[ind][amount] = take+ntake ; 
    }
    int change(int amount, vector<int>& coins) {
        int n = coins.size() ; 
        vector<vector<int>> dp(n , vector<int>(amount+1, -1)) ; 
        return help(coins ,n-1 ,  amount , dp) ; 

    }
};