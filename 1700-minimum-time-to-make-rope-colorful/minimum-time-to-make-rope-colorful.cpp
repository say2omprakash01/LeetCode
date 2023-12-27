class Solution {
public:
    int minCost(string colors, vector<int>& neededTime) {
        int n = colors.size() ; 
        int l = 0 , res = 0 ; 
        for(int r = 1 ; r<n ; r++){
            if(colors[l] == colors[r]){
                if(neededTime[l]<neededTime[r]){
                    res+=neededTime[l] ; 
                    l=r ; 
                }
                else res+=neededTime[r] ; 
            }
            else l = r ; 

        }
        return res ; 
    }
};
// greedy : if 2 adjacent ballon is of same color then pop one with less needed time