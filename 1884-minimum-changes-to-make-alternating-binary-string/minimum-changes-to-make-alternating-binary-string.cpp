class Solution {
public:
    int minOperations(string s) {
        int n = s.size(), count = 0 , count1 = 0 ;
        if(n == 1) return 0;
        for(int i = 0; i < n; i++) { // 0 at even position 
            if(i%2 == 0 and s[i] == '1') count++;
            if(i%2 == 1 and s[i] == '0') count++;
        }

        for(int i = 0; i < n; i++) { // 1 at even position
            if(i%2 == 0 and s[i] == '0') count1++;
            if(i%2 == 1 and s[i] == '1') count1++;
        }

        //return min(count, n-count);     //  "n - count", is to handle 1,0,1,0,. case
        return min(count , count1) ; 
    }
};