#include<bits/stdtr1c++.h>
using namespace std;
int fib(int n){
    int i=0;
    if(n==1 || n==2) return 1;   
    return fib(n-1)+fib(n-2);
}
int main(){
   int n;
   cin>>n;
   cout<< fib(n);
}
