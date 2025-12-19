#include <iostream>
using namespace std;

/*
Title: Military Time
Difficulty: Medium
*/

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    string t, i, h; cin >> t >> i;
    int o = stoi(t.substr(0, (t.size() == 5 ? 2 : 1)));
    h = (o) == 12 ? (i == "AM" ? "00" : "12") : (i == "PM" ? to_string(o + 12) : (o < 10 ? "0" : "") + to_string(o));
    cout << h << t.substr((t.size() == 4 ? 1 : 2));
}
