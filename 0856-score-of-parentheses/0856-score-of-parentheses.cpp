class Solution {
public:
    int scoreOfParentheses(string s) {
        int score = 0;
        int n = s.size();
        int cnt = 0;
        int i = 0;
        
        while (i < n) {
            if (s[i] == '(') {
                cnt++;
                i++;
            } 
            // 1. Changed to 'else if' so we don't accidentally check the 
            // same index twice after incrementing 'i' above.
            else if (s[i] == ')') { 
                cnt--; // We are closing a parenthesis, so decrease count
                
                // 2. Instead of resetting cnt to 0, we use it to measure "depth". 
                // If the previous char was '(', we found a core pair "()".
                if (s[i - 1] == '(') {
                    score += (1 << cnt); // This means 2 to the power of 'cnt'
                }
                
                i++; // 3. We MUST increment 'i' here, otherwise we get an infinite loop!
            }
        }
        return score;
    }
};