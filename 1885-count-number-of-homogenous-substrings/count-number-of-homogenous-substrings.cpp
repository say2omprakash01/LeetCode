class Solution {
public:
    int countHomogenous(string s) {
        int l = 0 ; 
        long long res = 0 ; 
        for(int r = 0 ; r<s.length() ; r++){
            if(s[l] == s[r]) res+= r-l+1 ; 
            else{
                res+=1 ; 
                l = r ; 
            }
        }
        return (int)(res%(1000000007))  ; 
    }
};