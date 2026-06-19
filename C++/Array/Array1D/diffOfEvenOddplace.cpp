#include<bits/stdc++.h>
using namespace std;
int evaluteDifference(int a[], int n){
    int sumE=0, sumO=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            sumE +=a[i];
        }
        else sumO+=a[i];
    }
    return (sumE-sumO);   
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
       cin>>a[i];
    }

    cout<< "Difference between sum of even and odd places: " << evaluteDifference(a, n);
}