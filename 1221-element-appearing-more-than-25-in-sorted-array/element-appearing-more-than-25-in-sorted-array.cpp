class Solution {
public:
    int findSpecialInteger(vector<int>& arr) {
        int n = arr.size() ; 
        int cnt = 1 ;
        int ans = INT_MIN ; 
        int op = arr[0] ; 
        for(int i = 1 ; i<n ; i++){
            if(arr[i]==arr[i-1]){
                cnt++ ; 
                if(cnt>ans) op = arr[i] ; 
                ans = max(ans , cnt) ; 
            }
            else cnt = 1 ; 
        }

        return op ; 
    }
};