class Solution {
public:
    vector<int> findDuplicates(vector<int>& nums) {
        int n = nums.size() ; 
        vector<int> ans ; 
        unordered_map<int,int> mp ; 
        for(int i = 0 ; i<n ; i++){
            mp[nums[i]]++ ; 
        }
        for(auto x : mp){
            if(x.second>=2) ans.push_back(x.first) ; 
        }
        return ans ; 
                  
    }
};