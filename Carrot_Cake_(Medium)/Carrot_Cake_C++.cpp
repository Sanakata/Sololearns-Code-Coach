#include <iostream>
using namespace std;

/*
Title: Carrot Cake
Difficulty: Medium
*/

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int carrots, boxes; cin >> carrots >> boxes;
    cout << (7 - carrots % boxes <= 0 ? "Cake Time" : "I need to buy " + to_string(7 - carrots % boxes) + " more") << "\n";
}
