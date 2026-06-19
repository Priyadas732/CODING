#include<bits/stdc++.h>
using namespace std;
void print1(int n){
 for(int i=1;i<=n;i++){
    //number
    for(int j=1;j<=i;j++){
        cout<< j ;
    }
    //space
    for(int j=1;j<=2*n-2*i;j++){// j<2*(n-i)
        cout<<" ";
    }
    //number
    for(int j=i;j>=1;j--){
        cout<< j ;
    }
    cout<< endl;
 }
}
int main(){
    int n;
    cin>> n;
    print1(n);
}
/* output
1    1
12  21
123321
*/