class Solution {
public:
    bool f(vector<int>& nums, int mid , int t){
        int n = nums.size() , ans = 0  ; 
        for(int i = 0 ; i< n ; i++){
            ans+=ceil(((double)(nums[i])/(double)(mid))) ; 
        }
        return ans<=t ; 
    }
    int smallestDivisor(vector<int>& nums, int t) {
        int n = nums.size() ; 
        int maxi = INT_MIN ; 
        for(int i = 0 ; i<n ; i++){
            maxi = max(maxi , nums[i]) ; ;  
        }
        int low = 1 , high = maxi ; 
        while(low<=high){
            int mid =(low+high)/2 ; 
            if(f(nums , mid , t)) high = mid-1 ; 
            else low = mid+1 ; 
        }
        return low ; 
    }
};