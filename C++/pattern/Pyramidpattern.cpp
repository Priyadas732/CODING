#include<bits/stdc++.h>
using namespace std;
void print6(int n){
 for(int i=0;i<n;i++){
    //space
    for(int j=0;j<n-i-1;j++){
        cout << "  ";
    }
    //star
    for(int j=0;j<2*i+1;j++){
    cout << "* ";
    }
    //space
    for(int j=0;j<n-i-1;j++){
        cout<< "  ";
    }
    cout<< endl;
 }
 
}

/*int main(){
    int n;
    cin >> n;
    print6(n);
    }*/

// //inverted

void print7(int n){
 for(int i=0;i<n;i++)
 {
    
    //space
    for(int j=0;j<i;j++){
        cout << "  ";
    }
    //star
    for(int j=0;j<2*n-(2*i+1);j++){
    cout << "* ";
    }
    //space
    for(int j=0;j<i;j++){
        cout<< "  ";
    }
    cout<< endl;
 }
}int main(){
    int n;
    cin >> n;
    //print6(n); // diamond pattern
    print7(n);   // lower half diamond
}

/*
        *
      * * *
    * * * * *
    * * * * *
      * * * 
        * 
*/

