// Left Rotate the array by one place using 3rd variable temp
#include <bits/stdc++.h> 
#include<iostream>
using namespace std;
void leftRotate(int arr[], int n){
    // Write your code here.
    int temp = arr[0];
    for(int i=1; i<n;i++){
        arr[i-1]=arr[i]; 
    }
    arr[n-1] = temp;
}
int main(){
    int n;
    cin >>n;
    int arr[n];
    for(int i=0; i<n; i++){
        cin>> arr[i];
    }
     leftRotate(arr, n);
    for(int i=0;i<n;i++){
        cout << arr[i] <<" ";
    }
    return 0;
}
