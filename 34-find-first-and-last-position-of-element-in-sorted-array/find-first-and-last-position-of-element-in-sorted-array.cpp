class Solution {
public:
    int n ; 
    int firstOcc(vector<int> &nums , int low , int high , int x){
        if(low>high) return -1 ; 
        int mid = (low+high)/2 ; 
        if(x>nums[mid]) return firstOcc(nums , mid+1 , high , x) ; 
        else if(x<nums[mid]) return firstOcc(nums , low , mid-1 , x) ; 
        else{
            if(mid==0 or nums[mid] != nums[mid-1]) return mid ; 
            else return firstOcc(nums , low , mid-1 , x) ; 
        } 
    }
    int lastOcc(vector<int> &nums , int low , int high , int x){
        if(low>high) return -1 ; 
        int mid = (low+high)/2 ; 
        if(x>nums[mid]) return lastOcc(nums , mid+1 , high , x) ; 
        else if(x<nums[mid]) return lastOcc(nums , low , mid-1 , x) ; 
        else{
            if(mid==n-1 or nums[mid] != nums[mid+1]) return mid ; 
            else return lastOcc(nums , mid+1 , high , x) ; 
        } 
    }
    vector<int> searchRange(vector<int>& nums, int target) {
         n = nums.size() ; 
        return{firstOcc(nums,0 , n-1 , target),lastOcc(nums, 0 , n-1 , target)} ;
    }
};