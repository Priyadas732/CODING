// Positive  no sift right to the array Negative no shift left side of the array 
#include<iostream>
#include<vector>  
using namespace std;
void sortPosiNeg(vector<int> & v){
    
    int n= v.size();
    int noO= 0;
    int noZ =0;
    int noT=0;
    for(int i=0;i<n;i++){
        if(v[i]==0) noZ++;
        if(v[i]==1) noO++;
        if(v[i]==2) noT++;

    }
}
int main(){
    vector<int> v;
    v.push_back(6);
    v.push_back(-1);
    v.push_back(-8);
    v.push_back(5);
    v.push_back(7);
    v.push_back(-7);
    v.push_back(-9);
    v.push_back(3);
   
   for(int i=0;i<v.size();i++){
    cout<< v[i]<<" ";
   }
    cout<< endl;

    sortPosiNeg(v);
     for(int i=0;i<v.size();i++){
       cout<< v[i]<<" ";
     }
    cout<< endl;
}
     


