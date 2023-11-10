class Solution {
public:
    int minimumMountainRemovals(vector<int>& arr){
        int n = arr.size() ; 
        vector<int> dp1(n, 1); 
        vector<int> dp2(n, 1);  

    
      for (int i = 0; i < n; i++) {
        for (int prev_index = 0; prev_index < i; prev_index++) {
            if (arr[prev_index] < arr[i] and dp1[i]<1 + dp1[prev_index]) {
                dp1[i] = 1 + dp1[prev_index];
            }
        }
      }

     
     for (int i = n - 1; i >= 0; i--) {
        for (int prev_index = n - 1; prev_index > i; prev_index--) {
            if (arr[prev_index] < arr[i] and dp2[i]<1 + dp2[prev_index]) {
                dp2[i] = 1 + dp2[prev_index];
            }
        }
     }

     int maxi = -1;
     for (int i = 0; i < n; i++) {
         if(dp1[i] > 1 && dp2[i] > 1)
        maxi = max(maxi, dp1[i] + dp2[i] - 1);
     }
     return n-maxi;
    }
};