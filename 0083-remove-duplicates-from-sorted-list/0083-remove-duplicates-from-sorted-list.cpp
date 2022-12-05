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
    ListNode* deleteDuplicates(ListNode* head) {
        if(!head) return NULL;
        ListNode *temp = head, *nextVal = head->next;
        while(nextVal) {
            if(temp->val != nextVal->val) {
                temp->next = nextVal;
                temp = temp->next;
            }
            nextVal = nextVal->next;
        }
        temp->next = NULL;
        return head;
    }
};