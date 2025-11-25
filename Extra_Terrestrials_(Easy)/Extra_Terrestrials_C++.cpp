#include <iostream>
#include <algorithm>
using namespace std;

/*
Title: Extra-Terrestrials
Difficulty: Easy
*/

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    string w; cin >> w;
    reverse(w.begin(), w.end());
    cout << w << "\n";
}
