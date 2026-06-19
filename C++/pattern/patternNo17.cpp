#include<bits/stdc++.h>
using namespace std;
void print17(int n){
for(int i=0;i<n;i++){
    for(char ch='E'-i;ch<='E';ch++){
        cout<< ch <<" ";
    }
    cout <<endl;
}
}
/*void print18(int n){
for(int i=0;i<n;i++){
    //star
    for(int j=0;j<n-i;j++){
        cout<< "*";
    }
    //space
     for(int j=0;j<=i;j++){
        cout<<" ";
     }
    //star
     for(int j=0;j<=n-i;j++){
        cout<<"*";
     }
}
    //star
    for(int j=0;j<=i+1;j++){
        cout<<"*";
    }
    //space
    for(int j=0;j<= 2*(n-i-1);j++){
        cout<< " ";
    }
    //star
    for(int j=0;j<=i+1;j++){
        cout<<"*";
    }
    cout<< endl;*/


int main(){
    int n;
    cin>> n;
   // print17(n);
    print17(n);
}
/*outputNo17: 5
E
D E
C D E
B C D E
A B C D E
*/
