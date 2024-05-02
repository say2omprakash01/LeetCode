// using sorting and 2 pointer approach
class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        int i=0;
        int j = n-1;
        while(j > i){
            if(nums[i] > 0)return -1;
            if(nums[j] == -nums[i])return nums[j];
            if(abs(nums[i]) > nums[j])i++;
            else j--;
        }
        return -1;
    }
};