/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if (!head || !head->next || !head->next->next)
            return {-1, -1};
        ListNode* prev = head;
        head = head->next;

        vector<int> index;
        int i = 1;
        while (head->next) {
            if ((prev->val < head->val && head->val > head->next->val) ||
                (prev->val > head->val && head->val < head->next->val)) {
                index.push_back(i);
            }
            prev = head;
            head = head->next;
            i++;
        }

        if (index.size() < 2)
            return {-1, -1};
        int localminima = INT_MAX;
        for (int l = 0; l < index.size() - 1; l++) {
            localminima = min(index[l + 1] - index[l], localminima);
        }

        return {localminima, index.back() - index[0]};
    }
};