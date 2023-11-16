#include <vector>
#include <stack>
using namespace std;

class Solution {
public:
    int maxHistogram(vector<int>& arr) {
        int n = arr.size() ; 
        stack<int> s ;
        int res= 0  ;
        int curr ; 
        int tp ; 
        
        for(int i = 0 ; i<n ; i++){
            while(!s.empty() && arr[s.top()] >= arr[i]){
                tp = s.top() ; 
                s.pop() ;
                curr = arr[tp]*(s.empty()?i:(i-s.top()-1)) ; 
                res = max(curr , res) ; 
            }
            s.push(i) ;
        }
        
        while(!s.empty()){
                tp = s.top() ; 
                s.pop() ;
                curr = arr[tp]*(s.empty()?n:(n-s.top() -1)) ; 
                res = max(curr , res) ; 
        }
        return res ; 
    }

    int maximalRectangle(vector<vector<char>>& matrix) {
        if(matrix.empty())
            return 0;
        
        int m = matrix.size();
        int n = matrix[0].size();
        int res = 0;
        
        vector<int> height(n, 0);
        
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++)
            {
                if(matrix[i][j] == '1')
                    height[j]++;
                else
                    height[j] = 0;
            }
            
            res = max(res, maxHistogram(height));
        }
        
        return res;
    }
};
