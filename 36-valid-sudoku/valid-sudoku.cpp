class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& b) {
        unordered_map<string , int> hash ; 
        for(int i = 0 ; i<9 ; i++){
            for(int j = 0 ; j<9 ; j++){
                if(b[i][j] !='.'){
                    string r = "row"+to_string(i)+to_string(b[i][j]) ; 
                    string c = "col"+to_string(j)+to_string(b[i][j]) ; 
                    int bo = (i/3)*3+(j/3) ; 
                    string box = "box"+to_string(bo)+to_string(b[i][j]) ; 

                    if(hash[r]!=1 and hash[c]!=1 and hash[box] != 1){
                        hash[r]++ ; 
                        hash[c]++ ; 
                        hash[box]++ ; 
                    }
                    else return false ; 
                }
            }
        }
        return true ; 
    }
};