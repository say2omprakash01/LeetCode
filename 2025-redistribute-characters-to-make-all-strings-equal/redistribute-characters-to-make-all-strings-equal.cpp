class Solution {
public:
    bool makeEqual(vector<string>& words) {
        if(words.size() ==1) return true ; 
        int tcharCount = 0 ; 
        for(auto s : words) tcharCount+=s.length() ;

        if(tcharCount%words.size() != 0) return false ; 

        vector<int> v(26,0); 
        for(auto s : words){
            for(char c: s)
              v[c-'a']++ ; 
        }

        for(int i : v){
            if(i%words.size()!=0) return false ; 
        }

        return true ; 
    }
};