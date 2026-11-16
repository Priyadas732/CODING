class Solution {
public:
    int MOD = 1e9+7;
    int numOfSubarrays(vector<int>& arr) {
        int evenCount = 1;
        int oddCount = 0;
        int result = 0;
        int sum = 0;
        for(int i=0;i<arr.size();i++){
            sum += arr[i];
            if(sum%2==0){
                evenCount++;
                result = (result + oddCount)%MOD;
            }
            else{
                oddCount++;
                result = (result + evenCount)%MOD;
            }
            
        }
        return result;
    }
};