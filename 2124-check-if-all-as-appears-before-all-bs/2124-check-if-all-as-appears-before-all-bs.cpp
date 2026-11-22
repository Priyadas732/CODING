class Solution {
public:
    bool checkString(string s) {
        int bc = 0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='b') bc++;
            if(s[i]=='a' && bc > 0)return false;
        }
        return true;
    }
};