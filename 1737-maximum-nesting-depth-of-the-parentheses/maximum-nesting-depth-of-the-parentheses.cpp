class Solution {
public:
    int maxDepth(string s) {
        int res = 0 , cur = 0 ; 
        for(auto e : s){
            if(e == '(') res = max(res , ++cur) ; 
            if(e == ')') cur-- ; 
        }
        return res ; 
    }
};