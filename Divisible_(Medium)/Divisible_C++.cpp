#include <iostream>
#include <sstream>
#include <algorithm>
using namespace std;

/*
Title: Divisible
Difficulty: Medium
*/

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int n, ans = 1; cin >> n;
    cin.ignore();
    string s, snum; getline(cin, s);
    istringstream ss(s);
    while(ss >> snum) if(n % stoi(snum) != 0) ans = 0;
    cout << (ans ? "" : "not ") << "divisible by all\n";
}
