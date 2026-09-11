class Solution {
public:
    int totalNumbers(vector<int>& digits) {
        vector<int>freq(10,0);

        for(int n: digits){
            freq[n]++;
        }

        int ans = 0;

        // thundred place number
        for(int a=1;a<=9;a++){
            if(freq[a]==0)continue;

            freq[a]--;

            //ten place digit
            for(int b=0;b<=9;b++){
                if(freq[b]==0)continue;

                freq[b]--;

                // one place digit
                for(int c=0;c<=8; c +=2){
                    if(freq[c] > 0){
                        ans++;
                    }
                }
                freq[b]++;
            }
            freq[a]++;
        }

        return ans;
    }
};