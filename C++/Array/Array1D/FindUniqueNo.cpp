#include<bits/stdc++.h>
using namespace std;
void findUnique(int a[], int n){
    for(int i=0;i<n;i++){
        int count=0;
        for(int j=0;j<n;j++){
            if((i!=j) and (a[i]==a[j])){
                count++;
            }
        }
        if(count == 0){
            cout<< a[i]<<endl;
            break;
        }
    }
    
       
}
int main(){
    int n;
    cin>>n;
    int a[n];
    for(int i=0;i<n;i++){
       cin>>a[i];
    }

 findUnique(a, n);
}