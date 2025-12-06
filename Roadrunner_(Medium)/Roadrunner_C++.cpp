#include <iostream>
using namespace std;

/*
Title: Roadrunner
Difficulty: Medium
*/

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    double s, r, c; cin >> s >> r >> c;
    if(c <= r) cout << "Meep Meep\n";
    else cout << ((double) s / r < (50 / (c - r)) ? "Meep Meep" : "Yum") << "\n";
}
