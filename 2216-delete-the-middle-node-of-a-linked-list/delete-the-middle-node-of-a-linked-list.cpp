class Solution {
public:
    ListNode* deleteMiddle(ListNode* head) {
        ListNode* slow = head ; 
        ListNode* fast = head ; 
        ListNode* prev = nullptr; // Add a pointer to keep track of the previous node

        while(fast != NULL and fast->next != NULL){
            prev = slow;
            slow = slow->next ; 
            fast = fast->next->next ; 
        }

        if (prev != nullptr) {
            // Check if there is a previous node before accessing slow->next
            prev->next = slow->next;
            delete slow;
        } else {
            // Handling the case when the middle is the first node
            ListNode* temp = head->next;
            delete head;
            return temp;
        }

        return head ; 
    }
};
