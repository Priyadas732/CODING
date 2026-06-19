#include<iostream>
using namespace std;
int main(){
    int sideA, sideB, sideC;
    cout<<"Input three sides of triangle\n";
    cin>>sideA>>sideB>>sideC;
    if(sideA==sideB && sideB==sideC)
    {
        cout<<"this is an equilateral triangle\n";
    }
    else if(sideA==sideB || sideB==sideC || sideA==sideC)
    {
        cout<<"This is an isosceles triangle \n";
    }
    else{
        cout<<"This is an scalene triangle \n";
    }
    return 0;
}