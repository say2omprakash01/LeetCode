class Solution {
public:
    int isvowel(char c){
        string s = "aeiou" ; 
        return (s.find(c) != string::npos) ;  
    }
    int maxVowels(string s, int k) {
        int count = 0 ; 
        int n = s.size() ; 
        for(int i = 0 ; i<k ; i++){
            if(isvowel(s[i])) count++ ; 
        }
        int ans = count ; 
        for(int i = k ; i<n ; i++){
            if(!isvowel(s[i-k]) && isvowel(s[i])) count++ ; 
            if(isvowel(s[i-k]) && !isvowel(s[i])) count-- ; 
            ans = max(ans , count) ; 
        }
        return ans ; 
    }
};