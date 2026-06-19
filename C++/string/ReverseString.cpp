// Reverse string using inbuilt method
#include<bits/stdc++.h>
using namespace std;
int main(){
    string str = "geekforgeeks";
    reverse(str.begin(), str.end());
    cout<< str << endl;
    return 0;
}

// reverse string using stack 
/*
#include<bits/stdc++.h>
using namespace std;
void reversebyStack(string &str){
    stack<char> st;
    for(int i=0; i<str.length(); i++)
    // push the character into stack
    st.push(str[i]);

    for(int i=0;i<str.length();i++){
        // Pop the character of stack into the original string
        str[i] = st.top();
        st.pop();
    }
}
int main(){
   // Original string
   string str ="geeksforgeeks";
   reversebyStack(str);
   cout<< str;
   return 0;
}
*/