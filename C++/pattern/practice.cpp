#include<bits/stdc++.h>
using namespace std;

// Rhombus Printing
void print1(int n){
    for(int i=0; i<n; i++){
        for(int j=0;j<=n-i;j++){
           cout<< " ";
        }
        for(int j=0;j<=n;j++){
            cout<<"*";
        }
        cout<< endl;
    }
}

// Pyramid
void print2(int n){
    for(int i=1; i<n; i++){
        //space
        for(int j=1;j<=n-i;j++){
           cout<< " ";
        }
        //star
        for(int j=1;j<=2*i-1;j++){
            cout<<"*";
        }
        // space
        for(int j=1;j<=n-i;j++){
            cout<<" ";
        }
        cout<< endl;
    }
}


int main(){
    int n;
    char ch;
    cin>> n; 
    print2(n);
}
