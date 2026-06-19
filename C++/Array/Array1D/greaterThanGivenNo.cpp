#include<bits/stdc++.h>
using namespace std;
int countGreater(int a[], int n, int x){
    int count=0;
    for(int i=0;i<n;i++){
        if(a[i]>x)
         count++;
        
    }
    return count;
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
       cin>>a[i];
    }

    int x;
    cin>>x;

    cout<< "Number of Element greater than x are : " << countGreater(a, n, x);
}