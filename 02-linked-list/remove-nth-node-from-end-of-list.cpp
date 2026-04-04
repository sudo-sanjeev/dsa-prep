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
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode *nth=head,*last=head;
        int i=0;
        while(i<n && last) {
            last=last->next;
            i++;
        }
        if(!last)return head->next;

        while(last->next) {
            nth=nth->next;
            last=last->next;
        }
        if(nth && nth->next) {
            nth->next=nth->next->next;
        }
        return head;
    }
};
