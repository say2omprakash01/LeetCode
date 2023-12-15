class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        unordered_set<string> c ; 

        for(auto & i : paths) c.insert(i[0]) ; 

        for(auto & i : paths){
            string s = i[1] ; 
            if(c.find(s) == c.end()) return s ; 
        }

        return "" ; 
    }
};