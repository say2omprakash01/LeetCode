class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        // vector<int> a , b ; 
        // for(auto i : nums){
        //     if(i>0) a.push_back(i) ;
        //     if(i<0) b.push_back(i) ;  
        // }
        // int i =0 ; 
        // vector<int> ans ; 
        // while(i<a.size() or i<b.size()){
        //     ans.push_back(a[i]) ; 
        //     ans.push_back(b[i]) ; 
        // }
        // return ans ; 
        int n = nums.size() ; 
        vector<int> ans(n,0) ; 
        int posI = 0, negI = 1 ; 
        for(auto x : nums){
            if(x>0){
                ans[posI] = x ; 
                posI+=2 ; 
            }
            if(x<0){
                ans[negI] = x ; 
                negI+=2 ; 
            }
        }
        return ans ; 
    }
};