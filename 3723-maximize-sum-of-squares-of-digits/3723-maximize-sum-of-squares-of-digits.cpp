class Solution {
public:
    string maxSumOfSquares(int num, int sum) {
        if (sum > 9LL * num) {
            return "";
        }
        int nines = sum / 9;
        int rem = sum % 9;
        string ans(nines, '9');
        if (nines < num) {
            ans += to_string(rem);
            ans.append(num - nines - 1, '0');
        }
        return ans;
    }
};