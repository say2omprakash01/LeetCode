class Solution {
public:
    int f(vector<int> &w , int mid){
        int load = 0 , days = 1 ; 
        int n = w.size() ; 
        for(auto e : w){
            if(load+e > mid){
                days+=1 ; 
                load= e ; 
            }
            else load+=e ; 
        }
        return days ; 
    }
    int shipWithinDays(vector<int>& w, int d) {
        int low = *max_element(w.begin() , w.end()) ; 
        int high = accumulate(w.begin() , w.end() , 0) ;
        // int n = w.size() ; 
        while(low<=high){
            int mid = (low+high)/2 ; 
            if(f(w , mid)<=d) high = mid-1 ; 
            else low = mid+1 ; 
        }
        return low  ; 

    }
};