class Solution {
public:
    int beauty(vector<int> &freq){
        int maxf = -1e9 , minf = 1e9 ; 
        for(auto e : freq){
            maxf = max(maxf , e) ; 
            if(e>=1) minf = min(minf, e) ; 
        }
        return maxf-minf ; 
    }
    int beautySum(string s) {
        int res = 0 ; 
        int n = s.size() ; 
        for(int i =0 ; i<n ; i++){
            vector<int>freq(26 , 0) ; 
            for(int j = i ; j<n ; j++){
                freq[s[j]-'a']++ ; 
                res+=beauty(freq) ; 
            }
        }
        return res ; 
    }
};