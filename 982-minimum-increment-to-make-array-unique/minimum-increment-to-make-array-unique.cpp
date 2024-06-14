class Solution {
public:
    int minIncrementForUnique(vector<int>& nums) {
        int s = nums.size() ; 
        int res = 0 ; 
        if(s<2) return 0 ; 
        sort(nums.begin() , nums.end()) ; 
        for(int i = 1 ; i<s ; i++){
            if(nums[i]<=nums[i-1]){
                res += nums[i-1]-nums[i]+1 ; 
                nums[i] = nums[i-1]+1 ; 
            }
        }
        return res ; 
    }
};