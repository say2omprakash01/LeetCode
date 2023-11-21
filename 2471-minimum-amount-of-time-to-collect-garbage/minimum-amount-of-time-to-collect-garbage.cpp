class Solution {
public:
    int garbageCollection(vector<string>& garbage, vector<int>& travel) {
        int sum = 0, count = 0; 
        unordered_map<char, int> last;
        for(int i = 0; i < garbage.size(); ++i){
            count += garbage[i].size();
            for(auto c: garbage[i]) last[c] = sum;
            if(i < travel.size()) sum += travel[i];
        }
        return count + last['M'] + last['P'] + last['G'];
    }
};