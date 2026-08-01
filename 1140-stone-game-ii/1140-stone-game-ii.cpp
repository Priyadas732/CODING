class Solution {
public:
    int n;
    int t[2][101][101];
    int solveforAlice(vector<int>& piles,int person, int idx, int M){
            if(idx>=n)return 0;

            if(t[person][idx][M]!=-1) return t[person][idx][M];
            int result = (person==1)?-1:INT_MAX;
            int stones = 0;
            for(int x=1;x <= min(2*M,n-idx); x++){

                stones += piles[idx+x-1];

                if(person==1){ // Alice trun
                    result = max(result, stones + solveforAlice(piles, 0, idx+x, max(M,x))); 
                }
                else{ // Bob trun
                    result = min(result, solveforAlice(piles,1,idx+x, max(M,x)));
                }
            }
            return t[person][idx][M] = result;
    }
    int stoneGameII(vector<int>& piles) {
        n = piles.size(); 
        memset(t, -1, sizeof(t));
        return solveforAlice(piles,1,0,1);  
    }
};