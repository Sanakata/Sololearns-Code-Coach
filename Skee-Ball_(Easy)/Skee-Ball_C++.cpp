#include <iostream>
using namespace std;

/*
Title: Skee-Ball
Difficulty: Easy
*/

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int points, cost; cin >> points >> cost;
    cout << (points / 12 >= cost ? "Buy it!" : "Try again");
}
