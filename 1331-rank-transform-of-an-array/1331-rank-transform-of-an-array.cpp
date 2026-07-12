class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        map<int, int>mp;
        vector<int> brr;

        for(int i=0;i<arr.size();i++){
            brr.push_back(arr[i]);
        }

        sort(brr.begin(), brr.end());

        int temp =1;

        for(int i=0;i<brr.size();i++){
            if(mp[brr[i]] == 0){
                mp[brr[i]] = temp;
                temp++;
            }
        }

        for(int i=0; i<arr.size();i++){
            arr[i] = mp[arr[i]];
        }
        return arr;
    }
};