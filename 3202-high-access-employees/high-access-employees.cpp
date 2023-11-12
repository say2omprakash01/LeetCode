class Solution {
public:
    vector<string> findHighAccessEmployees(vector<vector<string>>& access_times) {
        unordered_map<string, vector<int>> mpp;

        
        for (const auto& entry : access_times) {
            string employee = entry[0];
            int time = stoi(entry[1]);
            mpp[employee].push_back(time);
        }

        vector<string> ans;

        
        for (auto& pair : mpp) {
            sort(pair.second.begin(), pair.second.end());
            
            if (pair.second.size() < 3) continue;
            
            for (int i = 0; i < pair.second.size() - 2; i++) {
                if (pair.second[i + 2] - pair.second[i] < 100) {
                    ans.push_back(pair.first);
                    break;  
                }
            }
        }

        return ans;
    }


};