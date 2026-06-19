#include<iostream>
using namespace std;
class Player{
private:
    int health;
    int score; // data member
    int age;
    bool alive;
 public:
    int getHealth(){
        return health;
    }
    int getScore(){
        return score;
    }
    int getAge(){
        return age;
    }
    int isAlive(){
        return alive;
    }
    void setHealth(int health){
        this->health = health;
    }
    void setScore(int score){
        this->score = score;
    }
    void setAge(int age){
        this->age = age;
    }
    void setIsAlive(bool alive){
        this->alive = alive;
    }
};

int add(int a, int b){
    return a+b;
}
int main(){
    // ignore this lines
    #ifndef ONLINE_JUDGE
    freopen("input.txt", "r",stdin);
    freopen("output.txt", "w", stdout);
    #endif
    cout<<"\n\n\n\n";

    Player harsh; // object creation, statically
    Player raghav;

    harsh.setHealth(70);
    harsh.setScore(100);
    harsh.setAge(21);
    harsh.setIsAlive(true);
    
    raghav.setHealth(78);
    raghav.setScore(60);
    raghav.setAge(20);
    raghav.setIsAlive(true);  
    
    cout<<add(10, 12);

}