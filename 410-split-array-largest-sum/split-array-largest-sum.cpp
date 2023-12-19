class Solution {
public:
    bool f(vector<int>& nums, int k , int mid){
        int p = 1 , sum = 0  ; 
        for(auto e : nums){
            if(sum+e<=mid) sum+= e ; 
            else{
                p++ ; 
                sum = e ; 
            }
        }
        return p<=k ; 
    }
    int splitArray(vector<int>& nums, int k) {
        int low = *max_element(nums.begin() , nums.end()) ; 
        int high = accumulate(nums.begin() , nums.end() , 0) ; 
        while(low<=high){
            int mid = (low+high)/2 ; 
            if(f(nums , k , mid)) high = mid-1 ; 
            else low = mid+1 ;  
        }
        return low ; 
    }
};

// class Solution {
// public:
//     bool f(std::vector<int>& nums, int k, int mid) {
//         int p = 1, sum = 0;
//         for (auto e : nums) {
//             if (sum + e <= mid)
//                 sum += e;
//             else {
//                 p++;
//                 sum = e;
//             }
//         }
//         return p <= k;
//     }

//     int splitArray(std::vector<int>& nums, int k) {
//         int low = *std::max_element(nums.begin(), nums.end());
//         int high = std::accumulate(nums.begin(), nums.end(), 0);
//         while (low <= high) {
//             int mid = (low + high) / 2;
//             if (f(nums, k, mid))
//                 high = mid - 1;
//             else
//                 low = mid + 1;
//         }
//         return low;
//     }
// };
