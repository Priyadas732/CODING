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
    vector<int> nodesBetweenCriticalPoints(ListNode* head) {
        if(!head || !head->next || !head->next->next)return {-1,-1};

        int firstIndex = -1;
        int prevIndex = -1;
        int currIndex = 1;

        ListNode* prev = head;
        ListNode* curr = head->next;
        ListNode* nxt = head->next->next;

        int minDiff = INT_MAX;

        while(nxt !=NULL){
            if((curr->val > prev->val && curr->val > nxt->val) || (curr->val < prev->val && curr->val < nxt->val)){
                if(firstIndex ==-1){
                    firstIndex = currIndex;
                }else{
                    minDiff = min(minDiff, currIndex - prevIndex);
                }

                prevIndex = currIndex;
            }

            prev = curr;
            curr = nxt;
            nxt = nxt->next;
            currIndex++;
        }

        if(minDiff==INT_MAX)return {-1,-1};

        int maxDiff = prevIndex - firstIndex;

        return {minDiff, maxDiff};
    }
};