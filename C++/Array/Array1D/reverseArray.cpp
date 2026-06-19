#include<bits/stdc++.h>
using namespace std; 
class Solution {
   vector<int>reverse(vector<int> &result){
       return result;
       
   }
  public:
    void reverseArray(vector<int> &arr) {
        
        int s=0;
        int e=arr.size()-1;
        while(s<=e) {
            swap(arr[s],arr[e]);
            s++;
            e--;
        }
        
        
        reverse(arr);
    
    }
};