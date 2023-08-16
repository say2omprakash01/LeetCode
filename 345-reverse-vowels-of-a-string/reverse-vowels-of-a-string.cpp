class Solution {
public:
    int isVowel(char ch){
     string str = "aeiouAEIOU";
     return (str.find(ch) != string::npos);
    }
    string reverseVowels(string s) {
        int n = s.size() ; 
        int low = 0 ; 
        int high = n-1 ; 
        while(low<high){
            if(isVowel(s[low]) && isVowel(s[high])){
                swap(s[low++] , s[high--]) ; 
            }
            else if(!isVowel(s[low])) low++ ; 
            else high--;
        }
        return s ; 
    }
};