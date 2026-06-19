#include<iostream>
using namespace std;
void reverse(string s){
    if(s.length()==0){
        return;
    }
    string ros= s.substr(1);//ros=rest of string
    reverse(ros);
    cout<<s[0];
}
int main(){
    reverse("Saathi");
    return 0;
}
