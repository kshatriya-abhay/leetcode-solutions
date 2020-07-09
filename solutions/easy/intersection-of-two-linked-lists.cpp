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
    ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
        vector<ListNode*> v1, v2;
        if((headA == NULL)||(headB == NULL)) return NULL;
        for(ListNode *it = headA; it!=NULL; it = it->next){
            v1.push_back(it);
        }
        for(ListNode *it = headB; it!=NULL; it = it->next){
            v2.push_back(it);
        }
        reverse(v1.begin(), v1.end());
        reverse(v2.begin(), v2.end());
        int i;
        for(i=0; i < v1.size() && i < v2.size(); i++){
            if(v1[i] != v2[i]){
                if(i == 0) return NULL;
                else return v1[i-1];
            }
        }
        return v1[i-1];
    }
};