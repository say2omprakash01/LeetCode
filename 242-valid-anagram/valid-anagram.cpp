class Solution {
public:
    bool isAnagram(string s, string t) {
        int m = s.size() ; 
        int n = t.size() ; 

        if(n!=m) return false ; 
        
        int count[256] ={0} ;
        for(int i = 0 ; i<s.size() ; i++){
            count[s[i]]++ ; 
            count[t[i]]-- ; 
        } 
        for(int i = 0 ; i<256 ; i++)
         if(count[i] != 0) return false ; 

        return true ;  
        
    }
};