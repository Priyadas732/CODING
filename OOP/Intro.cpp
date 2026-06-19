#include<iostream>
using namespace std;
class Player{
    public:
    int score;
    int health;
};

int main(){
    // ignore this lines
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r",stdin);
    freopen("output.txt", "w", stdout);
    #endif

    Player amit;
    amit.score = 90;
    amit.health =100;
    cout<<amit.score<<endl;
    cout<<amit.health<<endl;

    Player harsh;
    harsh.score = 90;
    harsh.health =100;
    cout<<harsh.score<<endl;
    cout<<harsh.health<<endl;

}