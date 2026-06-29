class Solution {
public:
    int numOfStrings(vector<string>& patterns, string word) {
        set<string>st;
        for(int i=0;i<word.size();i++){
            for(int j=i;j<word.size();j++){
                string s = word.substr(i,j-i+1);//substr(start_index, len)
                st.insert(s);
            }
        }
        for(auto &it:st)cout<<it<<" ";
        int count=0;
        for(auto &it:patterns){
            if(st.count(it))count++;
        }
        return count;
    }
};