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
    ListNode* deleteMiddle(ListNode* head) {
        if(head->next == NULL)
            return NULL;
            
        int len = 0;

        ListNode* node = head;
        while(node !=NULL){
            len++;
            node = node->next;
        }
        
        int deleteInd = len/2;

        node = head;
        len = 0;
        ListNode* prev = NULL;
        while(node!=NULL){
            if(len!=deleteInd){
                len++;
                prev = node;
                node = node->next;
            }else{
                prev->next = node->next;
                break;
            }
        }

        return head;
    }
};