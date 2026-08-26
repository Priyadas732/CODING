class Solution {
public:
    string shortestBeautifulSubstring(string s, int k) {
        int n = s.size();
        int left = 0;
        int ones = 0;

        int bestLI=-1;
        int bestLen = INT_MAX;

        for(int right = 0;right<n;right++){
            if(s[right]=='1')ones++;

            while(ones>k){
                if(s[left]=='1'){
                    ones--;
                }
                left++;
            }

            // leading zero remove
            if(ones==k){
                while(s[left]=='0' && left<=right){
                    left++;
                }

                int len = right-left+1;

                if(bestLen > len){
                    bestLen = len;
                    bestLI = left;
                }else if(bestLen == len){
                    // lexicographically smallest
                    if(s.compare(left, len, s, bestLI, bestLen) < 0){
                        bestLI = left;
                    }
                }
            }
        } 

        if(bestLI==-1)return "";
        return s.substr(bestLI, bestLen);
    }
};