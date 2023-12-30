class Solution {
public:
    void help(int i , int t ,vector<int>& c, vector<int>& v, vector<vector<int>> &ans){
        if(i==c.size()){
            if(t==0) ans.push_back(v) ; 
            return ; 
        }

        if(c[i]<=t){  // Pick the element
            v.push_back(c[i]) ; 
            help(i , t-c[i] , c , v , ans) ;
            v.pop_back() ;
        }

        help(i+1 , t , c , v , ans) ;  // non Pick
    }
    vector<vector<int>> combinationSum(vector<int>& c, int target) {
        vector<vector<int>> ans ; 
        vector<int> v ; 
        help(0 , target , c , v , ans) ; 
        return ans ; 
    }
}; 
// For doubt refer TakeUForward