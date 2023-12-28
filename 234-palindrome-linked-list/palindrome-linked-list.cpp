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
    ListNode* reverse(ListNode* head) {
        ListNode* pre = NULL;
        ListNode* curr = head;
        ListNode* nextptr;

        while (curr != NULL) {
            nextptr = curr->next;
            curr->next = pre;
            pre = curr;
            curr = nextptr;
        }

        return pre;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* slow = head;
        ListNode* fast = head;

        while (fast->next != NULL && fast->next->next != NULL) {
            slow = slow->next;
            fast = fast->next->next;
        }

        ListNode* rev = reverse(slow->next);
        ListNode* curr = head;

        while (rev != NULL) {
            if (curr->val != rev->val)
                return false;

            curr = curr->next;
            rev = rev->next;
        }
        return true;
    }
};