#include<iostream>
#include<vector>  
using namespace std;
void sort012(vector<int> & v){
    
    int n= v.size();
    int noO= 0;
    int noZ =0;
    int noT=0;
    for(int i=0;i<n;i++){
        if(v[i]==0) noZ++;
        else if(v[i]==1) noO++;
        else if(v[i]==2) noT++;

    }
    // filling no
    for(int i=0;i<n;i++){
        if(i<noZ)  v[i]=0;
        //else if((noZ<=i) && i<(noZ+noO)) {
        else if (i<(noZ+noO)) {
            v[i]=1;}
        //else if((noZ+noO)<=i && (i<noZ+noO+noT) ) v[i]=2;
        else v[i]=2;
    }
}

// Method 2
void sort012m2(vector<int> &v){
    int n= v.size();
    int low=0;
    int mid=0;
    int hi=n-1;;
  while(mid<=hi){
    if(v[mid]==2){
        swap(mid, hi);
        hi--;
    }
    if(v[mid]==0){
        swap(mid,low);
        low++;
        mid++;
    }
    if(v[mid==1]) mid++;
  }

}

int main(){
    vector<int> v;
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
    v.push_back(0);
    v.push_back(2);
    v.push_back(1);
   
   for(int i=0;i<v.size();i++){
    cout<< v[i]<<" ";
   }
    cout<< endl;

    // sort012(v);
    //  for(int i=0;i<v.size();i++){
    //    cout<< v[i]<<" ";
    //  }
    // cout<< endl;

    sort012m2(v);
     for(int i=0;i<v.size();i++){
       cout<< v[i]<<" ";
     }
    cout<< endl;
}
     


