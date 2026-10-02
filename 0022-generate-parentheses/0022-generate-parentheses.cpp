class Solution {
public:
    vector<string>res;
    void solve(int open, int close, string s){
        if(open==0 && close==0){
            res.push_back(s);
            return;
        }

        // take opening brackets
        if(open >= 0){
            solve(open-1, close, s +"(");
        }

        // take closing bracket
        if(close > open){
            solve(open, close-1, s+")");
        }

    }
    vector<string> generateParenthesis(int n) {
        solve(n,n, "");
        return res;
    }
};