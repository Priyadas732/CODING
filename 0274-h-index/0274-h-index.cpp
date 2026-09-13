class Solution {
public:
    int hIndex(vector<int>& citations) {
        sort(citations.rbegin(), citations.rend());

        for (int i = 0; i < citations.size(); i++) {
            // The (i+1)-th paper does not have at least (i+1) citations
            if (citations[i] < i + 1) {
                return i; // Exactly i papers qualified
            }
        }

        // All papers qualified
        return citations.size();
    }
};