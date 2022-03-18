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
    ListNode* mergeTwoLists(ListNode* l1, ListNode* l2) {
        ListNode* head = NULL;
        ListNode* temp = NULL;
        bool first = true;
        while((l1 != NULL)||(l2 != NULL)){
            ListNode* l;
            if(l1 == NULL){
                l = new ListNode(l2->val);
                l2 = l2->next;
            }
            else if(l2 == NULL){
                l = new ListNode(l1->val);
                l1 = l1->next;
            }
            else{
                l = new ListNode(min(l1->val, l2->val));
                if(l1->val < l2->val) l1 = l1->next;
                else l2 = l2->next;
            }
            if(first){
                head = l;
                temp = l;
                first = false;
            }
            else{
                temp -> next = l;
                temp = temp -> next;
            }
        }
        return head;
    }
};