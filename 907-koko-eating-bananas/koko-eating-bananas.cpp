// class Solution {
// public:
//     int fmax(vector<int>& p){
//         int mx = INT_MIN ; 
//         for(int i = 0; i<p.size() ; i++)
//          mx = max(mx , p[i]) ; 
//         return mx ;  
//     }
//     int fth(vector<int>& p, int h){
//         int n = p.size() ; 
//         int th = 0 ; 
//         for(int i = 0 ; i< n ; i++){
//             th+=ceil((double)(p[i])/(double)(h)) ; 
            
//         }
//         return th ; 
//     }
//     int minEatingSpeed(vector<int>& piles, int h) {
//         int low = 1 ; 
//         int high = fmax(piles) ; 
//         while(low<=high){
//             int mid = low + (high - low) / 2;
//             int th = fth(piles , mid) ; 
//             if(th<=h) high= mid-1 ; 
//             else low = mid+1 ; 
//         }
//         return low ; 
//     }
// };


class Solution {
public:
    long long fmax(vector<int>& p){
        long long mx = LONG_MIN ; 
        for(int i = 0; i<p.size() ; i++)
         mx = max(mx, static_cast<long long>(p[i])); 
        return mx ;  
    }
    long long fth(vector<int>& p, int h){
        int n = p.size() ; 
        long long th = 0 ; 
        for(int i = 0 ; i< n ; i++){
            th+=ceil((double)(p[i])/(double)(h)) ; 
            
        }
        return th ; 
    }
    int minEatingSpeed(vector<int>& piles, int h) {
        int low = 1 ; 
        long long high = fmax(piles) ; 
        while(low<=high){
            int mid = low + (high - low) / 2;
            long long th = fth(piles , mid) ; 
            if(th<=h) high= mid-1 ; 
            else low = mid+1 ; 
        }
        return low ; 
    }
};