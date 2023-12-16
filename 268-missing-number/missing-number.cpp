class Solution {
public:
    int missingNumber(vector<int>& nums) {
        // sort(nums.begin() , nums.end()) ; 
        // int  n = nums.size() ; 
        // for(int i = 0 ; i<n ; i++){
        //     int x = nums[i]^i ; 
        //     if(x) return i ; 
        // }
        // return n ; 
        int n = nums.size();
        int tsum = (n*(n+1))/2, s=0;
        for(int i:nums){
            s+=i;
        }
        return tsum-s;
    }
};