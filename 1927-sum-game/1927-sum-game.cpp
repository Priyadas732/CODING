class Solution {
public:
    bool sumGame(string A) {
        int n = A.length();
        int q1=0;
        int q2=0;
        int fhs = 0;
        int shs = 0;
        for(int i=0;i<n;i++){
            if(i<n/2){
                if(A[i]=='?') q1++;
                else fhs += A[i]-'0';
            }
            else{
                if(A[i]=='?') q2++;
                else shs += A[i]-'0';
            }
        }

        cout<<fhs<<" "<<shs;
        if((q1+q2)%2!=0)return true;
        if(fhs == shs && q1 == q2 )return false;
        if(fhs + ((q1-q2)/2)*9 == shs){
            return false;
        }
        return true;
    }
};