class Solution {
public:
    bool isPalindrome(int i, int j, string &s){
        while(i<=j){
            if(s[i]!=s[j])return false;
            i++;
            j--;
        }
        return true;
    }
    string longestPalindrome(string s) {
        string res = "";
        int len = 0;
        if(s.size()==1)return s;
        for(int i=0;i<s.size();i++){
            for(int j=i;j<s.size();j++){
                if((j-i+1) > len){
                    if(isPalindrome(i,j,s)){
                        res = s.substr(i,j-i+1);
                        len = j-i+1;
                    }
                }
            }
        }

        return res;
    }
};