
#include<bits/stdc++.h>
using namespace std;
// Left Rotate string s by d
void leftRotate(string &s, int d){
    reverse(s.begin(), s.begin()+d);
    reverse(s.begin()+d, s.end());
    reverse(s.begin(), s.end());
}
// Right Rotate string s by d
void rightRotate(string &s, int d){
    leftRotate(s, s.length()-d);
}
int main(){
    string str1 = "GeeksforGeeks";
    leftRotate(str1, 2);
    cout<< str1 << endl;

    string str2 = "GeeksforGeeks";
    rightRotate(str2, 2);
    cout<< str2 << endl;
    return 0;

}