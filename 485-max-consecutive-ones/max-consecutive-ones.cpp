class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int c = 0 , max = 0 ; 
        int n = nums.size() ; 
        for(auto e : nums){
            if(e == 1){
                c++ ; 
                if(c>max) max = c  ; 
            }
            else c = 0 ; 
        }
        return max ; 
    }
};