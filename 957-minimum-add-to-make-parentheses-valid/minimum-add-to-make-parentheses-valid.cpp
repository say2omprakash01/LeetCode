class Solution {
public:
    int minAddToMakeValid(string s) {
        int count = 0 , open = 0  ; 
        for(auto e : s){
            if(e=='('){
                count++ ;
                open++ ; 
            } 
            else{
                if(count>0 and open>0){
                    count-- ; 
                    open-- ;
                }
                else count++ ; 
            }
        }
        return count ; 
    }
};