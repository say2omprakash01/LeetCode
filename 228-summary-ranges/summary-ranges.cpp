class Solution {
public:
    vector<string> summaryRanges(vector<int>& nums) {
        vector<string> ans ; 
        int j= 0 , i =0 ; 
        int n = nums.size() ; 
        if(n==0) return ans ; 
        if(n==1){
            ans.push_back(to_string(nums[0])) ;
            return ans ; 
        }
        for( i = 0 ; i<n-1 ; i++){ 
           if(nums[i+1]!= nums[i]+1){
                if(i==j)ans.push_back(to_string(nums[i])) ;
                else if(i>j)ans.push_back(to_string(nums[j])+"->"+to_string(nums[i])) ; 
                j= i+1 ; 
            }
        }
        if(nums[n-1]==nums[n-2]+1 and i>j) 
           ans.push_back(to_string(nums[j])+"->"+to_string(nums[n-1])) ; 
        else{
            if(i>j)ans.push_back(to_string(nums[j])+"->"+to_string(nums[n-2])) ; 
            ans.push_back(to_string(nums[n-1])) ; 
        }
        return ans ; 
    }
};