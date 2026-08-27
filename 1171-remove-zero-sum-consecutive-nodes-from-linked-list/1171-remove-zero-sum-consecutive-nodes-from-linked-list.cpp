class Solution {
public:
    ListNode* removeZeroSumSublists(ListNode* head) {
        ListNode* dummy = new ListNode(0);
        dummy->next = head;

        int prefix_sum = 0;
        unordered_map<int, ListNode*> mp;
        mp[0] = dummy;

        while (head != NULL) {
            prefix_sum += head->val;

            if (mp.find(prefix_sum) != mp.end()) {

                // delete wala kaam karo
                ListNode* start = mp[prefix_sum];
                ListNode* temp = start;

                int pSum = prefix_sum;

                while (temp != head) {
                    temp = temp->next;
                    pSum += temp->val;

                    if (temp != head)
                        mp.erase(pSum);
                }

                start->next = head->next;
            }
            else {
                mp[prefix_sum] = head;
            }

            head = head->next;
        }

        return dummy->next;
    }
};