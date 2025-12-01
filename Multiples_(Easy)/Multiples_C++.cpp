#include <iostream>
using namespace std;

/*
Title: Multiples
Difficulty: Easy
*/

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int n, t, f, tf; cin >> n;
    t = --n / 3, f = n / 5, tf = n / 15;
    cout << (long long) t * (3 + 3 * t) / 2 + f * (5 + 5 * f) / 2 - tf * (15 + 15 * tf) / 2 << "\n";
}
