#include<bits/stdc++.h>
using namespace std;
void print19(int n){
    for(int i=1;i<=n;i++){
        int iniS=0;
     //stars
     for(int j=1;j<=i;j++){
        cout<<"*";
     }
     //spaces
     for(int j=1;j<=2*(n-i-1);j++){
        cout<<" ";
     }
     //stars
     for(int j=1;j<=i;j++){
        cout<<"*";

    }
    iniS+=2;
    cout<<endl;
}
}
int main(){
    int n; 
    cin>> n;
    print19(n);
}
/*output :- 6

*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*        *

*/