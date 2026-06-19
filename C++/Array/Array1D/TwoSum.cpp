// Doublet in the array whose sum is equal to the given value x
#include<bits/stdc++.h>
using namespace std;

int main (){
    int x;
    cout<< " enter target: ";
    cin>> x;
    vector<int> v; 
    int n;
    cout<< "Enter size of array: ";
    cin>> n;
    cout<< "Enter Array element: ";
    for(int i=0;i<n;i++){
        int q;
        cin>>q;
        v.push_back(q); 
    }  
    for(int i=0;i<v.size();i++){
        for(int j=i+1;j<v.size();j++){
            if(v[i]+v[j]==x){
                cout<< "(" << i<< ","<< j<< ")"<< endl;
                
            }
        }
    }
}