#include <iostream>
#include <cmath>
using namespace std;

/*
Title: Land Ho!
Difficulty: Easy
*/

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int p, w; cin >> p;
    w = ceil((double) ++p / 20);
    cout << (1 + 2 * --w) * 10 << "\n";
}
