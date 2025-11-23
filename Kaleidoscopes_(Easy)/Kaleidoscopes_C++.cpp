#include <iostream>
#include <cmath>
using namespace std;

/*
Title: Kaleidoscopes
Difficulty: Easy
*/

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int n, multiplier = 100; cin >> n;
    double price = n * 5.0, dc_price = price * (n > 1 ? 0.9 : 1), fn_price = dc_price * 1.07, rounded_price = round(fn_price * multiplier) / multiplier;
    cout << rounded_price << "\n";
}
