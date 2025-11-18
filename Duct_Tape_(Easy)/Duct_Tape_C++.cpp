#include <iostream>
using namespace std;

/*
Title: Duct Tape
Difficulty: Easy
*/

int main(){
    long long h, w; cin >> h >> w;
    cout << w * h / 5 + ((w * h) % 5 != 0) << "\n";
}
