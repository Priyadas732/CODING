#include<iostream>
using namespace std;
//PRINT PRIME NUMBER BETWEEN A and B ;
int main(){
    int n,a,b;
    cin>>a>>b;
    //int i;
    for(int num=a;num<b;num++){
        int i;
        for(i=2;i<n;i++){
        if(num%i==0){
        break;
        }
           // cout<<"NON PRIME"<<endl;
           // break;
        }
        if(i==num){
            cout<<num<<endl;
    }
}
   // if(i==n || n%i!=0){
       // cout<<"PRIME"<<endl;
    return 0;
}
