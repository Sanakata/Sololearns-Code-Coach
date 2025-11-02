#include <iostream>
#include <cmath>
using namespace std;

/*
Title: Halloween Candy
Difficulty: Easy
*/

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int houses; cin >> houses;
    cout << ceil((((double) 2 / houses) * 100.0)) << "\n";
}
