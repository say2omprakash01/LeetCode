class Solution {
public:
    vector<int> runningSum(vector<int>& nums) {
        int n = nums.size() ; 
        vector<int> v ; 
        int sum ; 
        for(int i=0 ; i<n ; i++){
            sum = 0 ; 
            for(int j = 0 ; j<=i ; j++){
                sum += nums[j] ;  
            }
            v.push_back(sum) ;
        }
        return v ; 
    }
};