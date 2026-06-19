#include<bits/stdc++.h>
using namespace std;
// Method 1 
int maze( int sr, int sc, int er, int ec){
   if(sr>er || sc>ec) return 0;
   if(sr==er && sc==ec) return 1;
   int rightWays = maze(sr,sc+1,er,ec);
   int downWays = maze(sr+1, sc, er, ec);
   int totalWays = rightWays + downWays ;
   return totalWays;
}
void printPath( int sr, int sc, int er, int ec, string s){
   if(sr>er || sc>ec) return ;
   if(sr==er && sc==ec) { // destinaton reached
    cout<< s <<endl;
    return;
   }
    printPath(sr,sc+1,er,ec, s+'R'); // right
    printPath(sr+1, sc, er, ec, s+'D'); // down
  
   
}
int main(){
    cout<< maze(1,1,4,4)<<endl;
    printPath(1,1,4,4," ");
}