#include<bits/stdc++.h>
using namespace std;

/* Star square*/
/*void print1(int n){
    for(int i=1; i<=n;i++){
        for(int j=1;j<=5;j++ ){
            cout<< "*" <<" ";
        }
        cout<< endl;
    }
}*/


/*Number Square*/
/*void print2(int n){
    for(int i=1; i<=n;i++){
        for(int j=1; j<=n;j++){
            cout<< j <<" ";
        }
        cout<< endl;
    }
}*/

/*Star Triangle*/
/*void print3(int n){
    for(int i=1; i<=n;i++){
        for(int j=1; j<=i;j++){
            cout<< "*";
        }
        cout<< endl;
    }
    }*/

/*Star Triangle Reverse  */
/*void print4(int n){
    for(int i=1; i<=n;i++){
        for(int j=1; j<=n+1-i;j++){
            cout<< "*";
        }
        cout<< endl;
    }
    }*/

 /*Odd number Triangle*/
/*void print6(int n){
    for(int i=1; i<=n;i++){
        int count=1;
        for(int j=1; j<=i ;j++){
            cout<<count <<" ";
            count=count+2;
        }
        cout<< endl;
    }
    }*/


 /*Alphabet square*/
/*void print6(int n){
    for(int i=1; i<=n;i++){
        
        for(char j='A'; j<'A'+n;j++){
            cout<< j <<" ";
        
        }
        cout<< endl;
    }
    }*/


   /*star plus. [not solve] n=odd number*/
/*void print7(int n){
    for(int i=1; i<=n;i++){
    
        for(int j=1; j<=n/2 ;j++){
            cout<<"  ";
        }
        for(int j=1;j<=n/2 +1;j++){
            cout<<"*";
        }
      for(int j=n/2+1;j<=n ;j++){
        cout<<" ";
      }
        }
        cout<< endl;
    }*/

/*Star cross[not solved]*/
void print8(int n){
    for(int i=1; i<=n;i++){
    
        for(int j=1; j<=i-1 ;j++){
            cout<<"  ";
        }
        for(int j=1;j<=1;j++){
            cout<<"*";
        }
        
        
      for(int j=j;j<=1;j++){
        cout<<" *";
      }
      
        
        cout<< endl;
    }
}

void print9(int n){
    for(int i=0; i<=n;i++){
    
       //space
    for(int j=0;j<n-i-1;j++){
        cout<< " ";
    }
    //numbers
  int num=0;
  int breakpoint=(2*i+1)/2;
    for(int j=0;j<2*i+1;j++){
        cout<< num;
      if(j<=breakpoint)num++;
      else num--;
    }
    //space
    for(int j=0;j<n-i-1;j++){
        cout<< " ";
    }
        
      
        cout<< endl;
    }
}


/*Pyramid of numbers 1
                    121*/

void print10(int n){
for(int i=0;i<n;i++){
    //space
    for(int j=0;j<n-i-1;j++){
        cout<< " ";
    }
    //number
    int ch=1;
    int breakpoint= (2*i+1)/2;
    for(int j=1;j<=2*i+1;j++){
        cout<< ch ;
        if(j<= breakpoint)ch++;
        else ch--;
    }
    //space
    for(int j=0;j<n-i-1;j++){
        cout<< " ";
    }
    cout<< endl;
 }
}

int main(){
    int n;
    char ch;
    cin>> n; 
    print8(n);
}



