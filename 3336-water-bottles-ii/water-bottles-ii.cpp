class Solution {
public:
    int maxBottlesDrunk(int nb, int ne) {
        int empty = nb;
        int ans = nb;

        while (empty >= ne) {
            empty -= ne;
            empty += 1;
            ans += 1;
            ne += 1;
        }
        return ans;
    }
};