class Solution {
public:
    bool f(vector<int>& b,int mid ,  int m, int k){
        int c = 0 , nf = 0  ; 
        for(int i =0 ; i<b.size() ; i++){
            if(mid>=b[i]) c++ ; 
            else{
                nf += c/k ; 
                c=0 ; 
            }  
        }
        nf += c/k ; 
            if(nf>=m) return true ; 
            return false ; 
    }
    int minDays(vector<int>& b, int m, int k) {
        long long x = m*1ll*k*1ll ; 
        int n = b.size() ; 
        if(x>n) return -1 ; 
        int mini = INT_MAX , maxi = INT_MIN ; 
        for(int i = 0 ; i<n ; i++){
            maxi = max(maxi , b[i]) ; 
            mini = min(mini , b[i]) ;  
        }
        int low = mini , high = maxi ; 
        while(low<=high){
            int mid =(low+high)/2 ; 
            if(f(b , mid , m , k)) high = mid-1 ; 
            else low = mid+1 ; 
        }
        return low ; 
    }
};




// class Solution {
// public:
// bool possible(vector<int> &arr, int day, int m, int k) {
//     int n = arr.size(); //size of the array
//     int cnt = 0;
//     int noOfB = 0;
//     // count the number of bouquets:
//     for (int i = 0; i < n; i++) {
//         if (arr[i] <= day) {
//             cnt++;
//         }
//         else {
//             noOfB += (cnt / k);
//             cnt = 0;
//         }
//     }
//     noOfB += (cnt / k);
//     return noOfB >= m;
// }
// int minDays(vector<int> &arr, int m, int k) {
//     long long val = m * 1ll * k * 1ll;
//     int n = arr.size(); //size of the array
//     if (val > n) return -1; //impossible case.
//     //find maximum and minimum:
//     int mini = INT_MAX, maxi = INT_MIN;
//     for (int i = 0; i < n; i++) {
//         mini = min(mini, arr[i]);
//         maxi = max(maxi, arr[i]);
//     }

//     //apply binary search:
//     int low = mini, high = maxi;
//     while (low <= high) {
//         int mid = (low + high) / 2;
//         if (possible(arr, mid, m, k)) {
//             high = mid - 1;
//         }
//         else low = mid + 1;
//     }
//     return low;
// }
// } ; 