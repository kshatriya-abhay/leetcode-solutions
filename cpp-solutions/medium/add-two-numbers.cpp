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
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* ans = nullptr;
        ListNode* head = nullptr;
        int carry = 0;
        while((l1 != nullptr) || (l2 != nullptr)) {
            int a = 0, b = 0;
            if (l1 != nullptr) {
                a = l1->val;
                l1 = l1->next;
            }
            if (l2 != nullptr) {
                b = l2->val;
                l2 = l2->next;
            }
            int sum = a + b + carry;
            carry = sum / 10;
            int digit = sum % 10;
            ListNode* node = new ListNode(digit);
            if(ans == nullptr) {
                ans = node;
                head = ans;
            }
            else {
                head -> next = node;
                head = head -> next;
            }
        }
        if (carry != 0) {
            ListNode* node = new ListNode(carry);
            head -> next = node;
            head = head -> next;
        }
        return ans;
    }
};