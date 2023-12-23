class Solution {
public:
    string removeOuterParentheses(string s) {
        string ans ; 
        int open = 0 ;
        for(auto a : s){
            if(a=='(' and open++>0) ans+=a ; 
            if(a==')' and open-->1) ans+=a ; 
        }
        return ans ; 
    }
};