#include<iostream>
using namespace std;
// using Loop 
int power(int a, int b){
    if(a==0) return 0;
    int p =1;
    for(int i=0;i<b;i++){
        p*=a;
    }
    return p;

}
// using Recursion
int main(){
    int n,t;
    cin>> n>> t;
    cout<< power(n,t);
}

