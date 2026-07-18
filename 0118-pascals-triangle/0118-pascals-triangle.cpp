class Solution {
public:
    vector<vector<int>> generate(int numRows) {
        vector<vector<int>>res;
        res.push_back({1});
        if(numRows==1){
            return res;
        }
        res.push_back({1,1});
        if(numRows==2){
            return res;
        }
        
        for(int i=2; i<numRows; i++){
            vector<int> temp(i+1);
            temp[0] = 1;
            temp[i] = 1;
            int j = i-1; 
            
            for(int k=1; k<i; k++){ 
                temp[k] = res[j][k] + res[j][k-1];
            }
            
            res.push_back(temp);
        }
        return res;
    }
};