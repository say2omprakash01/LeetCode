class Solution {
public:
    bool checkValid(vector<vector<int>>& m) {
        int n=m.size();
        for(int i=0;i<n;i++)
        {
            unordered_set<int> s;
            for(int j=0;j<n;j++)
            {
                if(m[i][j]>n || m[i][j]<1)
                break;
                s.insert(m[i][j]);
            }
            if(s.size()!=n)
            return false;
        }
        for(int i=0;i<n;i++)
        {
            unordered_set<int> s;
            for(int j=0;j<n;j++)
            {
                if(m[j][i]>n || m[j][i]<1)
                break;
                s.insert(m[j][i]);
            }
            if(s.size()!=n)
            return false;
        }
        return true;
    }
};