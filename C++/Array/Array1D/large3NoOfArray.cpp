#include<bits/stdc++.h>
using namespace std;
void largeThreeNo(int a[], int n){
    int count[3];
    int max1 = INT_MIN;
    int max2 = INT_MIN;
    int max3 = INT_MIN;

    for(int i=0;i<n;i++){
        if(a[i]>max1){
            max3 = max2;
            max2 = max1;
            max1 = a[i];
        }
        else if(a[i]>max2){
            max3 = max2; 
            max2 = a[i];
        }
        else if(a[i]>max3){
            max3 = a[i];
        }
        
    }
    if(max1 == INT_MIN)cout<<"No maximum number";
    else cout<< max1<<" ";

    if(max1 == INT_MIN)cout<<"No maximum number";
    else cout<< max2<<" ";

    if(max1 == INT_MIN)cout<<"No maximum number";
    else cout<< max3<<" ";
    
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
       cin>>a[i];
    }


 largeThreeNo(a, n);
}