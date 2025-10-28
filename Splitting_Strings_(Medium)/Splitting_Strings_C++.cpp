#include <iostream>
using namespace std;

/*
Title: Splitting Strings
Difficulty: Medium
*/

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    string s; cin >> s;
    int n, a = 1; cin >> n;
    for(char &c : s) cout << c << (a != s.size() && a++ % n == 0 ? "-" : "");
}
