#include<bits/stdc++.h>
using namespace std;
// void lastOccurrence( vector<int> &v, int size, int x){
//       int idx=-1;
//     for(int i=0;i<v.size(); i++){
//         if(v[i]==x){
//             idx = i;
//         }
//      }
//     return idx;  
// }
int main(){
   vector<int>v;
   v.push_back(9);
   v.push_back(10);
   v.push_back(8);
   v.push_back(1);
   v.push_back(6);
   v.push_back(4);
   v.push_back(9);
   v.push_back(0);   
   int x=9;
   int idx = -1;
//    for(int i=0;i<v.size();i++){
//     if(v[i]== x)
//     idx=i;
//    }

// From back side

for(int i = v.size()-1;i>=0;i--){
    if(v[i]==x){
    idx=i;
    break;
    }
}
   cout<< idx;
//    lastOccurrence(v, n, key);

}