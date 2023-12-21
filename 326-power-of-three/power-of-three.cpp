#include <cmath>

class Solution {
public:
    bool isPowerOfThree(int n) {
       // return fmod(log10(n) / log10(3), 1) == 0;
       if(n==0) return false;
        while(n!=1){
            int r=n%3; // r: remainder
            n=n/3;
            if(r!=0) return false;
        }
        return true;
    }
};
