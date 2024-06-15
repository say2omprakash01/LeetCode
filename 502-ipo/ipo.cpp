class Solution {
public:
    int findMaximizedCapital(int k, int w, vector<int>& profits, vector<int>& capital) {
        vector<pair<int,int>> v ; 
        int size = profits.size() ; 
        priority_queue<int> pq ; 
        for(int i = 0 ; i<size ; i++){
            v.push_back({capital[i] , profits[i]}) ; 
        }
        sort(v.begin() , v.end()) ; 

        int i = 0 ; 
        while(k--){
            while(i<size && v[i].first<=w){
                pq.push(v[i].second) ; 
                i++ ; 
            }
            if(pq.empty()) break ; 
            w+=pq.top() ; 
            pq.pop() ; 
        }
        return w ; 
    }
};