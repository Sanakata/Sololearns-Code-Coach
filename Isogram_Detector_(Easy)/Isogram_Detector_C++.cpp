#include <iostream>
#include <vector>
using namespace std;

/*
Title: Isogram Detector
Difficulty: Easy
*/

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    string s; cin >> s;
    bool is_isogram = true;
    vector<int> occurences(26, 0);
    for(const auto& c : s) if(++occurences[tolower(c) - 'a'] > 1) is_isogram = false;
    cout << (is_isogram ? "true" : "false") << "\n";
}
