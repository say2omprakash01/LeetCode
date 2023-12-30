// class Solution {
// public:
//     long long mod = 1e9 + 7; 
//     int countGoodNumbers(long long n) {
//         long long ans = 1;  // Change the data type to long long
//         int ind = n-1 ; 
//         while (ind >= 0) {
//             if (ind % 2 == 0) 
//                 ans = (ans * 5) % mod;
//             else 
//                 ans = (ans * 4) % mod;  
//             ind--; 
//         }
//         return static_cast<int>(ans);  // Convert back to int before returning
//     }
// };

class Solution {
public:
    long long mod = 1e9 + 7;

    long long power(long long base, long long exp) {
        long long result = 1;
        while (exp > 0) {
            if (exp % 2 == 1) {
                result = (result * base) % mod;
            }
            base = (base * base) % mod;
            exp /= 2;
        }
        return result;
    }

    int countGoodNumbers(long long n) {
        return static_cast<int>(power(5, (n + 1) / 2) * power(4, n / 2) % mod);
    }
};

