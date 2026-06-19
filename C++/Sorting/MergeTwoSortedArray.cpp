#include<bits/stdc++.h>
using namespace std;
void mergeToSortA(vector<int> &arr1, vector<int> &arr2,vector<int> &arr3){
    int i=0;
    int j=0;
    int k=0;
    for(int i=0;i<arr1.size();i++){
        for(int i=0;i<arr2.size();i++){
            for(int i=0;i<arr3.size();i++){
                if(arr1[i]<arr2[j])
                arr3[i]=arr1[i];
                else arr3[i]=arr2[j];
                i++;
                j++;
               
            }
        }
    }
}
int main(){
    int n,m;
    int arr1[m];
    int arr2[n];
    int arr3[m+n];
   
    cout << " size of 1st array ";
    cin>> m;
    cout<< "element of arr1 are : " ;
    for(int i=0;i<m;i++){
        cin>> arr1[i] ;
    }
    
     for(int i=0;i<m;i++){
        cout<< arr1[i] <<" ";
    }
      
    cout << " enter size of 2nd array and elements "; 
    cin >> n;
    cout<< "element of arr1 are : " ;
    for(int i=0;i<m;i++){
        cin>> arr2[i] ;
    }
    
     for(int i=0;i<m;i++){
        cout<< arr1[i] <<" ";
    }
}
/*class Solution
{
    public:
    void merge(int arr[], int l, int m, int r)
    {
         // Your code here
         vector<int> temp;
         int left = l;
         int right = m+1;
         while(left<=m && right<=r){
             if(arr[left]<= arr[right]){
             temp.push_back(arr[left]);
             left++;
             }
             else {
             temp.push_back(arr[right]);
             right++;
             }
         }
         while(left<=m){
             temp.push_back(arr[left]);
             left++;
         }
         while(right<=r){
             temp.push_back(arr[right]);
             right++;
         }
        for(int i =l; i<=r;i++){
            arr[i] = temp[i-l];
        }
         
    }
    public:
    void mergeSort(int arr[], int l, int r)
    {
        //code here
        if(l>=r) return;
        int m=l+(r-l)/2;


        mergeSort(arr,l,m);
        mergeSort(arr,m+1,r);
        merge(arr,l,m,r);
        
    }
};
*/



