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
        ListNode* reverseList(ListNode* head) {
            ListNode* prev=NULL;
            while(head) {
                ListNode* next=head->next;
                head->next=prev;
                prev=head;
                head=next;
            }
            return prev;
        }
    };
    
    class Solution {
    public:
        ListNode* reverseList(ListNode* head) {
            if(!head)return NULL;
            stack<ListNode*>st;
    
            while(head) {
                st.push(head);
                head=head->next;
            }
            ListNode* tail=st.top();
     
            while(st.size()) {
                ListNode* top=st.top();
                st.pop();
                if(st.size()) {
                    top->next=st.top();
                } else {
                    top->next=NULL;
                }
            }
            return tail;
        }
    };