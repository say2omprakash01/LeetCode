class Solution {
public:
    int minPairSum(vector<int>& nums) {
        int n = nums.size() ; 
        sort(nums.begin() , nums.end()) ; 
        int s = 0 , e = n-1 ; 
        int maxi = INT_MIN ; 
        while(s<=e){
            int sum = nums[s]+nums[e] ; 
            maxi = max(maxi , sum) ; 
            s++ ; e-- ; 
        }
        return maxi ; 
    }
};