class Solution {
public:
    int missingNumber(vector<int>& nums) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        for (int i = 0; i < n; i++) {
            int x = nums[i] ^ i;
            if (x)
                return i;
        }
        return n;
    }
};