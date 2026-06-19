#include<bits/stdtr1c++.h>
using namespace std;
// either one step or 2 step and their combination
int stairPath(int n){
    if(n==1) return 1; 
    if(n==2) return 2;   
    return  stairPath(n-1) + stairPath(n-2);
}
// When 3 step are allowed
int stairPath3(int n){
    if(n==1) return 1; 
    if(n==2) return 2;
    if(n==3) return 3;  
    return  stairPath3(n-1) + stairPath3(n-2)+ stairPath3(n-3);
}
int main(){
   int n;
   cin>>n;
   cout<< stairPath(n)<<endl;
   cout<< stairPath3(n);
}
