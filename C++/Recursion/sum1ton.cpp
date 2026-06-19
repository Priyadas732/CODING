// Print sum using parameter
#include<iostream>
using namespace std; 
void sum1toN(int sum,int n){
    // base case
    if(n==0) {
        cout<< sum<<endl;
        return;
    }
    // kaam call
    sum1toN(sum+n,n-1);
    return ;
}
// using Return type

int sum1toN(int n){
    // base case
    if( n==0) return 0;
    // kaam call
    int sum = n + sum1toN(n-1);
    // return
    return sum;
}
int main(){
     int n;
     cin>>n;
     sum1toN(0, n);
     cout<< sum1toN(n);
}


   
