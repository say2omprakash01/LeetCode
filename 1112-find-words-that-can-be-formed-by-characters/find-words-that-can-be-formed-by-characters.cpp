class Solution {
public:
    int countCharacters(vector<string>& words, string chars) {
       unordered_map<char,int> m ; 
       for(char c : chars) m[c]++ ; 
       int res = 0  ; 
       for(string w : words){
           unordered_map<char,int> copy = m ; 
           for(char c : w){
               if(copy.find(c)!=copy.end() and copy[c]>0)
               copy[c]-- ; 
               else{
                   res-=w.length() ; 
                   break ; 
               }
            }
            res+= w.length() ; 
       }
       return res ; 
    } 
};