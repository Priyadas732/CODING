
class Solution {
public:
    static const int MOD = 1e9 + 7;

    struct SegmentTree {
        int n;
        vector<long long> sum, sqSum, lazy;

        SegmentTree(int n) : n(n) {
            sum.assign(4 * n, 0);
            sqSum.assign(4 * n, 0);
            lazy.assign(4 * n, 0);
        }

        void apply(int node, int l, int r, long long val) {
            long long len = r - l + 1;

            sqSum[node] = (
                sqSum[node]
                + 2LL * val * sum[node] % MOD
                + val * val % MOD * len % MOD
            ) % MOD;

            sum[node] = (
                sum[node] + val * len
            ) % MOD;

            lazy[node] = (lazy[node] + val) % MOD;
        }

        void push(int node, int l, int r) {
            if (lazy[node] == 0 || l == r)
                return;

            int mid = l + (r - l) / 2;
            long long val = lazy[node];

            apply(node * 2, l, mid, val);
            apply(node * 2 + 1, mid + 1, r, val);

            lazy[node] = 0;
        }

        void update(int node, int l, int r,
                    int ql, int qr, long long val) {
            if (ql > r || qr < l)
                return;

            if (ql <= l && r <= qr) {
                apply(node, l, r, val);
                return;
            }

            push(node, l, r);

            int mid = l + (r - l) / 2;

            update(node * 2, l, mid, ql, qr, val);
            update(node * 2 + 1, mid + 1, r,
                   ql, qr, val);

            sum[node] = (
                sum[node * 2] + sum[node * 2 + 1]
            ) % MOD;

            sqSum[node] = (
                sqSum[node * 2] + sqSum[node * 2 + 1]
            ) % MOD;
        }

        void update(int l, int r, long long val) {
            if (l > r) return;
            update(1, 0, n - 1, l, r, val);
        }

        long long getSquareSum() {
            return sqSum[1];
        }
    };

    int sumCounts(vector<int>& nums) {
        int n = nums.size();

        SegmentTree st(n);
        unordered_map<int, int> last;

        long long ans = 0;

        for (int i = 0; i < n; i++) {
            int prev = -1;

            if (last.count(nums[i])) {
                prev = last[nums[i]];
            }

            // New distinct element for starts after prev.
            st.update(prev + 1, i, 1);

            // Sum of squared distinct counts for
            // all subarrays ending at index i.
            ans = (ans + st.getSquareSum()) % MOD;

            last[nums[i]] = i;
        }

        return ans;
    }
};
