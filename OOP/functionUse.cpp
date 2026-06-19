#include<iostream>
using namespace std;
class Player{
    public:
    int score; // data member
    int health;

    void showHealth(){
        cout<<"Health is : " << health<<endl;
    }

    void showScore(){
        cout<<"Score : "<<score;
    }
};

class Calculator{
    public:
    int a;
    int b;
    void add(){
        cout<< a+b;
    }
    void subtract(){
        cout<< a-b;
    }
};

int main(){
    // ignore this lines
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r",stdin);
    freopen("output.txt", "w", stdout);
    #endif
    
    // Array use
    int score[100] ={};
    int health[100] = {}; 
    Player amit;
    amit.score = 90;
    amit.health =100;
    
    amit.showHealth();
    amit.showScore();

    Calculator calci;
    calci.a=10;
    calci.b = 7;
    calci.add();
    calci.subtract();
}