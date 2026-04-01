#include <vector>
#include <queue>

using namespace std;

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
        ListNode* mergeKLists(vector<ListNode*>& lists) {
            priority_queue<pair<int,ListNode*>,vector<pair<int,ListNode*>>,greater<pair<int,ListNode*>>>pq;
    
            for(auto a:lists) {
                if(a!=NULL) pq.push({a->val,a});
            }
            if(pq.empty()) return NULL;
    
    
            ListNode *head = new ListNode();
            ListNode *tail=head;
    
            while(!pq.empty()) {
                auto a=pq.top();
                pq.pop();
                tail->next=a.second;
                tail=tail->next;
                if(a.second->next) {
                    pq.push({a.second->next->val, a.second->next});
                }
            }
            return head->next;
        }
    };
