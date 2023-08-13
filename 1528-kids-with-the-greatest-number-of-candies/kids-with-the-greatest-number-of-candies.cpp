class Solution {
public:
    int maxi(vector<int>& candies){
        int maxim = 0 ; 
        int n = candies.size() ; 
        for(int i = 0 ; i< n ; i++){
            if(candies[i]>=candies[maxim]) maxim = i ; 
        }
        return maxim ; 
    }
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int n = candies.size() ;
        vector<bool> result(n) ;  
        for(int i = 0 ; i<n ; i++){
            candies[i]+=extraCandies ; 
            if(i == maxi(candies) || candies[i] == candies[maxi(candies)])result[i] = true ; 
            candies[i]-=extraCandies ;
        }
        return result ; 
    }
};