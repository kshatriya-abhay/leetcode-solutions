/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    bool hasCycle(ListNode *head) {
        ListNode *temp1 = head;
        ListNode *temp2;
        if(head != NULL) temp2 = head->next;
        else return false;
        bool ans = false;
        while(temp2 != NULL){
            if(temp1 == temp2) return true;
            if(temp2->next != NULL) temp2 = temp2->next->next;
            else break;
            temp1 = temp1->next;
        }
        return ans;
    }
};