#include <iostream>
#include <vector>
using namespace std;

/*
Title: Deja Vu
Difficulty: Medium
*/

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    string s; cin >> s;
    bool is_unique = true;
    vector<int> counts(26, 0);
    for(const auto& c : s) if(++counts[c - 'a'] > 1) is_unique = false;
    cout << (is_unique ? "Unique" : "Deja Vu") << "\n";
}
