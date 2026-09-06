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
    struct Compare {
        bool operator()(ListNode* a, ListNode* b) {
            return a->val > b->val;  // Min-heap
        }
    };
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        priority_queue<ListNode*, vector<ListNode*>, Compare>pq;

        for(auto head: lists){
            if(head != nullptr)
                pq.push(head);
        }

        ListNode* head = NULL;
        ListNode* tail = head;
        while(!pq.empty()){
            ListNode* curr = pq.top();
            pq.pop();
            if(curr->next !=NULL)pq.push(curr->next);
            if(head==NULL){
                head = curr;
                tail = head;
            }else{
                tail->next =  curr;
                tail = tail->next;
            }
        }

        return head;
    }
};