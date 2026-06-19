#include<bits/stdc++.h>
using namespace std;
void print1(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=i;j++){
            cout <<"*";
        }
        cout << endl;                  
    }
    
 }
void print2(int n){
    for(int i=1;i<=n;i++){
        for(int j=1;j<n-i+1;j++){
            cout <<"*";
        }
        cout << endl;
    }
}
int main(){
    int n;
    cin >> n;
    print1(n);
   // print2(n);
}
//another way to solve              *
/*void print2(int n){               * *
    for(int i=1;i<=2*n-1;i++){      * * *
        int star=i;                 * *
        if (i>n )stars =2*n-i;      *  
        for(int j)
    }
}
*/