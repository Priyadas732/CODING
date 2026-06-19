#include<bits/stdc++.h>
using namespace std;
// Method 1 
int pow( int a, int b){
   if(b==0) return 1;
   if(b==1) return a;
   return a * pow(a , b-1);
}
// Method 2 Logorithmic
int powLog(int x, int n){
    if(n==0) return 1;
    if(n==1) return x;
    if(n%2==0) return pow(x, n/2)*pow(x, n/2);
    else if(n%2!=0) return pow(x, n/2)*pow(x, n/2)*x;
    
}
int main(){
    int n1,n2;
    cin>> n1 >>n2 ;
    cout<<pow(n1,n2)<<endl;
    cout<< powLog(n1,n2);
}