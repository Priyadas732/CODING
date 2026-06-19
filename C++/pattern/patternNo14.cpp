#include<bits/stdc++.h>
using namespace std;
void print14(int n){
/*for(int i=0;i<n;i++){
    for(char ch='A';ch<='A'+i;ch++){
        cout << ch<<" ";
    }
   cout << endl;
}*/
for(int i=0;i<n;i++){
    for(char ch='A';ch<='A'+(n-i-1);ch++){
        cout<< ch << " ";
    }
    cout<< endl;
}
}
int main(){
    int n;
    cin >> n;
    print14(n);
}
/*output
A
A B
A B C
A B C D
A B C D E
*/
/*output No2
A B C D E 
A B C D
A B C
A B
A
*/