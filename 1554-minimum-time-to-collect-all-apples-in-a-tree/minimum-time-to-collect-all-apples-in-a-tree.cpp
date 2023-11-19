class Solution {
public:
    int minTime(int n, vector<vector<int>>& edges, vector<bool>& hasApple) {
        vector<vector<int>> adj(n) ; 
        for(auto & e : edges){
            adj[e[0]].push_back(e[1]) ; 
            adj[e[1]].push_back(e[0]) ; 
        }

        return dfs(0 , -1 , adj , hasApple) ; 
    }

    int dfs(int cur , int prev  , vector<vector<int>> &adj , vector<bool>& hasApple){
        int count = 0 ; 
        for(auto & x : adj[cur]){
            if(x!=prev){
                int ans = dfs(x , cur , adj , hasApple);
                if(ans>0 or hasApple[x]) count+=(ans+2) ; 
            }
        }
        return count ; 
    }
};