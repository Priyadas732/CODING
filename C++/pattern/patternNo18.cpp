#include<bits/stdc++.h>
using namespace std;
void print18(int n){
   int iniS=0;
for(int i=0;i<n;i++){
    //stars
    for(int j=1;j<=n-i;j++){
        cout<< "*";
    }
    //spaces
     for(int j=0;j<iniS;j++){ //j<2*i;j++;
        cout<<" ";
     }
    //stars
     for(int j=1;j<=n-i;j++){
        cout<<"*";
     }
    iniS +=2;
     cout <<endl;
}
   iniS=8;
   for(int i=1;i<=n;i++){
    //stars
    
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    //spaces
    
    for(int j=1;j<= iniS;j++){
        cout<< " ";
    }
    //stars
    for(int j=1;j<=i;j++){
        cout<<"*";
    }
    iniS-=2;
    cout<< endl;
}
}


int main(){
    int n;
    cin>> n;
   // print17(n);
    print18(n);
}
/*outputNo18: 
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
*/
