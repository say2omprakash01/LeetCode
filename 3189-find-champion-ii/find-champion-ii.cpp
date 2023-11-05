class Solution {
public:
    int findChampion(int n, std::vector<std::vector<int>>& edges) {
    std::vector<int> arr(n, 0);

    for (const std::vector<int>& edge : edges) {
        arr[edge[1]]++;
    }
    int res = -1;
    for (int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            if (res == -1) {
                res = i;
            } else {
                return -1;
            }
        }
    }
    return res;
}
};