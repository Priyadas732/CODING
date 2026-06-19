// Right Rotate the Array by K times places Third Variables
#include<bits/stdc++.h>
#include<iostream>
using namespace std;
void leftRotate(int arr[], int n, int d){
    d = d%n;
     

    // Another way to Solve 

    reverse(arr, arr+d);
    reverse(arr+d, arr+n);
    reverse(arr, arr+n);
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
    int d;
    cin >> d;
    leftRotate(arr, n, d);
    for(int i=0;i<n;i++){
        cout << arr[i] <<" ";
    }
    return 0;
}