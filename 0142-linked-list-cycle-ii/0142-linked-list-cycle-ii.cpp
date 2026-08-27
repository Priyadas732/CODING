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
    ListNode *detectCycle(ListNode *head) {
        if(head==NULL || head->next==NULL)return NULL;

        ListNode* node = head;

        set<ListNode*>st;
        while(node->next !=NULL){
            if(st.find(node) != st.end()){
                return node;
            }

            st.insert(node);
            node = node->next;
        }
        return NULL;
    }
};