#include <iostream>
using namespace std;

/*
Title: Building Blocks
Difficulty: Medium
*/

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int b, r, g, y; cin >> b >> r >> g >> y;
    cout << b % 15 + r % 15 + g % 15 + y % 15 << "\n";
}
