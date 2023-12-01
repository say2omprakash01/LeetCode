class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
        int n = word1.size() ; 
        int m = word2.size() ; 
        string ans , ans1 ; 
        for(int i = 0 ; i<n ; i++){
            ans += word1[i] ; 
        }

        for(int i = 0 ; i<m ; i++){
            ans1 += word2[i] ; 
        }

        return ans==ans1 ; 
    }
};