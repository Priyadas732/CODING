
#include<iostream>
using namespace std;
int main(){
int nums[8]={1,2,3,4,5,6,7,8};
    for(int i=1;i<8;i++){
    nums[i]+=nums[i-1];
  }
   for(int i=0;i<8;i++){
   cout<< nums[i]<<" ";
  }
  
}

