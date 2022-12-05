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
    ListNode* middleNode(ListNode* head) {
        
        int cntTotalNodes = 0;
        for(ListNode* i = head;i != NULL;i=i->next) {
            cntTotalNodes++;
        }
        cout << cntTotalNodes;
        // return head;
        int returnNodes = cntTotalNodes/2;
        
        while(head) {
            if(returnNodes == 0) return head;
            --returnNodes;
            head = head->next;
        }
        // for(ListNode *i = head;head != NULL;head=head->next) {
        //     if(returnNodes == 0) {
        //         return head;
        //     }
        //     returnNodes--;
        // }
        cout << returnNodes;
        return NULL;
    }
};