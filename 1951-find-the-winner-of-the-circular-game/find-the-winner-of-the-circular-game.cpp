class Solution {
public:
    int findTheWinner(int n, int k) {
        int ans = -1 ; 
        vector<int> v; 
        for(int i = 0 ; i<n ; i++) 
        v.push_back(i) ; 
        int sowrd = 0 ; 
        k = k-1 ; 
        solve(v,k,sowrd,ans) ; 
        return ans+1 ; 
    }
    void solve(vector<int> v,int k,int sowrd,int& ans){
        if(v.size()==1){
            ans = v[0] ;
            return ; 
        }  
        sowrd = (sowrd+k)%v.size() ; 
        v.erase(v.begin()+sowrd) ; 
        solve(v,k,sowrd,ans) ; 
    }
};