#include<bits/stdc++.h>
using namespace std;
void display(vector<int> &a)
{
    for (int i = 0; i < a.size(); i++)
    {
        cout << a[i] << " ";
    }
    cout << endl;
}

void reversePart(int i, int j, vector<int>& v){
    while(i<=j){
        int temp=v[i];
        v[i]=v[j];
        v[j]=temp;
        i++;
        j--;
    }
    return ;
}
int main(){
  vector<int> v(8);
  for(int i=0;i<v.size();i++){
    cin>>v[i];
  }
  cout<<endl;
  for(int i=0;i<v.size();i++){
    cout<< v[i]<<" ";
  }
  cout<<endl;

 reversePart(0, 3, v);
 
 cout<< endl;
 display (v);
}