#include<bits/stdc++.h>
using namespace std;
vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    int n = a.size();
    int m = b.size();
    set<int> st;
    for(int i=0;i<n;i++){
        st.insert(a[i]);
    }
    for(int i=0;i<m; i++){
        st.insert(b[i]);
    }
    vector<int> temp;
    for(auto it : st){
        temp.push_back(it);
    }
    return temp;
}

// Optimal Code

#include<bits/stdc++.h>
using namespace std;
vector < int > sortedArray(vector < int > a, vector < int > b) {
    // Write your code here
    int n = a.size();
    int m = b.size();
    int i = 0;
    int j = 0;
    vector<int> unionArr;
    while( i<n && j<m){
        if(a[i] <= b[j]){
            if(unionArr.size() == 0 || 
             unionArr.back() != a[i]) {
                unionArr.push_back(a[i]);
            }
            i++;
        }
        else {
            if(unionArr.size() == 0||
           unionArr.back() != a[i]) {
                unionArr.push_back(a[i]); 
        }
        j++;
    }
}
while(i<n){
    if(unionArr.size() == 0 || 
             unionArr.back() != a[i]) {
                unionArr.push_back(a[i]);
            }
            i++;
}
while(i<m){
    if(unionArr.size() == 0 || 
             unionArr.back() != b[j]) {
                unionArr.push_back(b[j]);
            }
            i++;
}
return unionArr;
}

