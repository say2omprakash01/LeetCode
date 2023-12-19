class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        // for(auto a : arr) if(a <= k ) k++ ;   // O(n)
        // return k ; 

        int n = arr.size() ; 
        int low = 0 , high = n-1 ; 
        while(low<=high){
            int mid = (low+high)/2 ; 
            int missing = arr[mid]-(mid+1) ; 
            if(missing<k) low = mid+1 ; 
            else high = mid-1 ; 
        }
        return low+k ; 
    }
};
// see striver lecture for doubts