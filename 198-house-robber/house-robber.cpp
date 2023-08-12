class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size() ; 
        int prev = nums[0] ; 
        int prev2 = 0 ; 
        for(int i = 1 ; i<n; i++){
            int pick = nums[i] ; 
            if(i>1) pick+=prev2 ; 
            int nonpick = prev; 
            int curri= max(pick , nonpick) ; 
            prev2= prev;
            prev = curri ; 
        }
        return prev ; 
    }
};