#include <iostream>
using namespace std;

/*
Title: Easter Eggs
Difficulty: Easy
*/

int main(){
    long long t, y, f; cin >> t >> y >> f;
    cout << (t == y + f ? "Candy Time" : "Keep Hunting") << "\n";
}
