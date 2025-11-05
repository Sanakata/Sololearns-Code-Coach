#include <iostream>
#include <cmath>
using namespace std;

/*
Title: CMYK to RGB
Difficulty: Medium
*/

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    double c, m, y, k, r, g, b; cin >> c >> m >> y >> k;
    r = 255 * (1 - c) * (1 - k), g = 255 * (1 - m) * (1 - k), b = 255 * (1 - y) * (1 - k);
    cout << static_cast<int>(round(r)) << "," << static_cast<int>(round(g)) << "," << static_cast<int>(round(b)) << "\n";
}
