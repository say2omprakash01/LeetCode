class Solution {
public:
    string frequencySort(string s) {
        vector<pair<int , char>>f('z'+1 , {0,0}) ; 
        for(auto e : s){
            f[e] = {f[e].first+1 , e} ;  
        }
        sort(f.begin() , f.end()) ; 
        string ans = "" ; 
        for(auto e : f){
            ans+=string(e.first , e.second) ; 
        }
        reverse(ans.begin() , ans.end());
        return ans ; 
    }
};