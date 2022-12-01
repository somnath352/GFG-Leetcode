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
private:
    ListNode *reverseLinkedList(ListNode *head, ListNode *prev) {
        if(head == NULL) return prev;
        ListNode *nextNode = head->next;
        head->next = prev; // NULL
        return reverseLinkedList(nextNode, head);
    }
public:
    ListNode* reverseList(ListNode* head) {
        return reverseLinkedList(head, NULL);
    }
};