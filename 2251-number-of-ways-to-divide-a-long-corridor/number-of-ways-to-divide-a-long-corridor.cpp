class Solution {
public:
    int numberOfWays(string c) {
        int n = c.size() ; 
        int cnt = 0 ; 
        for(char e : c){
            if(e=='S') cnt++ ; 
        }
        if(cnt ==0 or cnt%2) return 0 ;  
        long long ans = 1 ; 
        int cn = 0 ; 
        for(int i = 0 ; i<n ; i++){
            if(c[i] == 'S') cn++ ; 
            if(cn==2){
                cnt=1;
                i++ ; 
                while(i<n and c[i]=='P'){
                  cnt++ ; 
                  i++ ; 
                }  
                if(i==n) break ; 
                ans = (ans*cnt)%1000000007; 
                cn = 0 ; 
                i-- ; 
            }
        }
        return ans ; 
    }
};