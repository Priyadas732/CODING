#include<iostream>
using namespace std; 
void printNum(int arr[],int idx,int size){
    if(idx ==size ) return;// base case
    cout<<arr[idx]<<" ";
    printNum(arr,idx+1,size);
    return;
}
int main(){
    int arr[] = {1,2,3,4,5,6};
    int n = 6;
    printNum(arr,4,n);
    return 0;
}