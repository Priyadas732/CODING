#include<iostream>
#include<vector>
using namespace std;
void swap_two(int *a,int *b){
    int temp = *a;
    *a = *b;
    *b = temp;
    return ;
}
int main(){
    int t;
    int p;
    cin>>t>>p;
    cout<<t<<p<<endl;
    swap_two(&t,&p);
    cout<<t<<p;
}