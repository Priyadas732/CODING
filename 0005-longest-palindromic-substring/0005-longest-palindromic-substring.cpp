class Solution {
public:
    int n;
    
    bool isPalindrome(string &s,int i,int j){
        
        if(i>=j) return true;

        if(s[i]==s[j]){
            return isPalindrome(s,i+1,j-1);
        }
        return false;
    }
    
    string longestPalindrome(string s) {
        n = s.size();
        
        int maxLen=0;
        int sp=0;
        for(int i=0;i<n;i++){
            for(int j=i;j<n;j++){
                if(isPalindrome(s,i,j)==true){
                    if(j-i+1 > maxLen){
                        maxLen = j-i+1;
                        sp = i;
                    }
                }
            }
        }
        return s.substr(sp,maxLen);
    }
};