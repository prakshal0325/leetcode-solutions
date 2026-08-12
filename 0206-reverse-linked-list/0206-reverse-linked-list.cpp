class Solution {
public:
    ListNode* reverseList(ListNode* head) {
        ListNode* curr = head;
        ListNode* prev_node = NULL;

        while (curr != NULL) {
            ListNode* next_node = curr->next;

            curr->next = prev_node;
            prev_node = curr;
            curr = next_node;
        }

        return prev_node;
    }
};