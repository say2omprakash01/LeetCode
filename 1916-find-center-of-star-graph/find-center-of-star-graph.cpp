class Solution {
public:
    int findCenter(vector<vector<int>>& e) {
        vector<int> v ; 
        int n = e.size() ; 
        int m = e[0].size() ; 
        for(int i =0 ; i< n ; i++){
            for(int j = 0 ; j<m ; j++){
                v.push_back(e[i][j]) ; 
            }
        }
        sort(v.begin() , v.end()) ; 

        for(int i = 0 ; i<v.size()-1 ; i++){
            if(v[i+1] == v[i]) return v[i] ;  
        }

        return -1  ;


    }
};