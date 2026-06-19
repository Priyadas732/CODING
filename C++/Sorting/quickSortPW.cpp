#include<iostream>
using namespace std;
int partition(int arr[], int st, int end){
    int pivotElement = arr[st];
    int count =0;
    for(int i=st+1;i<=end;i++){
        if(arr[i]<=pivotElement) count++; 
    }
    int pivotIdx = count + st;
    swap(arr[st], arr[pivotIdx]);
    int i = st;
    int j = end;
    while(i<pivotIdx && j> pivotIdx){
        if(arr[i]<= pivotElement) i++;
        if(arr[j]>= pivotElement) j--;
        else if(arr[i] > pivotElement && arr[j]<pivotElement){
            swap(arr[i], arr[j]);
            i++;
            j--;
        }
    }
    return pivotIdx;
}
void quicksort(int arr[], int st, int end){
    if(st>=end) return ; // base
    // 5,1,8,2,7,6,3,4
    int piIdx = partition(arr, st, end);
     // 4,1,3,2,5,7,6,8
     quicksort(arr, st, piIdx-1);
     quicksort(arr, piIdx+1, end);

}
int main(){
    int arr[] = {-7,5,1,8,2,7,6,3,4,65};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    cout << endl;
    quicksort(arr, 0, n-1);
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}