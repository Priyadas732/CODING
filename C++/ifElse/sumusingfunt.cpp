#include<bits/stdc++.h>
using namespace std;
int sum(int num1, int num2){
    int num3=num1+num2; //5+6=11
    return num3;
}
int max(int num1, int num2){
    if(num1>=num2){
    return num1;
    }
    else {
    return num2;
    }
}
int main(){
    int num1,num2;
    cin>> num1 >> num2;
    int res= sum(num1, num2);//11
    cout << res<<endl;
    int maximum= max(num1, num2);
    cout<< maximum;
    return 0;
}
// pass by value
/*void dosomething(int num){
    cout<< num <<endl;
    num+=5;
    cout << num <<endl;
    num+=5;
    cout << num << endl;
}
int main(){
    int num=10;
    dosomething(num);
    cout<< num <<endl;
    return 0;
}*/

// one more example of pass by value
/*void doSomething(string s){
    s[0]='t';
    cout << s <<endl;
}
int main(){
    string s="Raj";
    doSomething(s);
    cout << s << endl;
    return 0;  //outputtaj, raj
}*/

// pass by reference
   /*void doSomething(string &s){
    s[0]='t';
    cout << s <<endl;
}
int main(){
    string s="Raj";
    doSomething(s);
    cout << s << endl;
    return 0;} // output taj,taj*/


    //array will pass always by Reference
    /*
    void doSomething( int arr[], int n){
        arr[0]+=100;
        cout<<"Value inside function" << arr[0]<< endl;

    }

    int main(){
        int n= 5;
        int arr[n];
        for(int i=0;i<n;i++){
            cin >> arr[i];
        }
        doSomething(arr, n);

        cout << "Value inside int main: " << arr[0] <<endl;
    }
    */ 
