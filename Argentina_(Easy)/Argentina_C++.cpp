#include <iostream>
using namespace std;

/*
Title: Argentina
Difficulty: Easy
*/

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int d, p; cin >> d >> p;
    cout << (d / 50 < p ? "Pesos" : "Dollars") << "\n";
}
