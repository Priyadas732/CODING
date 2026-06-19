// Move all zero to the end of the array
#include<bits/stdc++.h>
using namespace std;
int main(){

    int n ;
    cin>> n;
    vector<int> a(n);
    for(int i=0;i<n;i++)cin>>a[i];
    // no non zero numbers
    int j=0;
    for(int i=0;i<n;i++){
        if(a[i]!=0){
            swap(a[i], a[j]);
            j++;
        }
    }
    cout << "The desired output is : "<<endl;
    for(int i=0;i<n;i++)cout<< a[i]<<" ";
}
