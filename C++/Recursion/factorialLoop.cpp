#include<iostream>
using namespace std;
// factorial upto n
void factUpto(int n){
    int f=1;
    for(int i=1;i<=n;i++){
      f *=i;
      cout<< f<<endl;
    }
    
  
}
// factorial
void fact(int n){
    int f = 1;
    for(int i=2;i<=n;i++){
      f = f*i; 
    }
    cout<< f;
}
int main(){
    int n;
    cin>>n;
   cout<< "factorial of n: ";
   fact(n);
   cout<< endl;
   cout<< "Factorial upto n : "<<endl;
   factUpto(n);
    return 0;
}
