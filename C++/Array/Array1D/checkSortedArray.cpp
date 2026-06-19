#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
       cin>>a[i];
    }
    int i;
    for(i=0;i<n-1;i++){
       if(a[i]>a[i+1]){
          break;
    }
    }
    if(i==n-1) cout<<"the array is sorted";
    else cout<<"array is unsorted";

}