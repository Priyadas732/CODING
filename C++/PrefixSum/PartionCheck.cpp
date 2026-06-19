
#include<iostream>
using namespace std;
int main(){
int nums[]={1,2,3,4,5,5,10,10};
int n= sizeof(nums)/sizeof(nums[0]);
// formation of prefix sum
    for(int i=1;i<n;i++){
    nums[i]+=nums[i-1];
  }
  // check if any x exits
  int idx= -1;
   for(int i=1;i<n;i++){
    if(2*nums[i]==nums[n-1]){
        idx = i;
        break;
    }
   }
   if(idx!=-1) cout<<"Yes it can be partitioned after "<< idx;
   else cout<<"Cannot be partitioned";
}