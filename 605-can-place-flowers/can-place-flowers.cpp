class Solution {
public:
    bool canPlaceFlowers(vector<int>& flowerbed, int n) {
        int s = flowerbed.size() ; 
        int count = 0 ; 
        for(int i = 0 ; i< s && count<n ; i++){
            if(flowerbed[i] == 0){
                int next = (i==s-1)?0:flowerbed[i+1] ; 
                int prev = (i==0)?0:flowerbed[i-1] ; 
                if(next==0 & prev == 0){
                    flowerbed[i]= 1 ; 
                    count++ ; 
                }

            }
        }
        return count == n ; 
   
    }
};