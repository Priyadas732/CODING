//  Odd indexd elements to its second multiple and increment all even indexed value by 10
#include<bits/stdc++.h>
using namespace std;
void evaluteOperation(int a[], int n){
    int sumE=0, sumO=0;
    for(int i=0;i<n;i++){
        if(i%2==0){
            a[i]= a[i]*2;
        }
        else a[i]=a[i]+10;
    }
    for(int i=0;i<n;i++)cout<< a[i]<<" ";
       
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
       cin>>a[i];
    }

 evaluteOperation(a, n);
}