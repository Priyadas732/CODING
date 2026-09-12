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
    int n;
    ListNode* merge(ListNode* L1, ListNode* L2){
        if(L1==nullptr)return L2;
        if(L2==NULL) return L1;

        if(L1->val < L2->val){
            L1->next = merge(L1->next, L2);
            return L1;
        }else{
            L2->next = merge(L1, L2->next);
            return L2;
        }
        return NULL;
    }
    ListNode* divideLinkedList(vector<ListNode*>& lists, int st, int end){
        if(st > end) return NULL;

        if(st == end){
            return lists[st];
        }

        int m = st + (end-st)/2;
        ListNode* L1 = divideLinkedList(lists, st,m);
        ListNode* L2 = divideLinkedList(lists, m+1, end); 

        return merge(L1, L2);
    }
    ListNode* mergeKLists(vector<ListNode*>& lists) {
        n = lists.size();
        if(n==0) return NULL;
        return divideLinkedList(lists,0,n-1);
    }
};