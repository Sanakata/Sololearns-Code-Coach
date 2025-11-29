#include <iostream>
#include <cctype>
#include <algorithm>
#include <iterator>
using namespace std;

/*
Title: Symbols
Difficulty: Medium
*/

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    string s, ans; getline(cin, s);
    copy_if(s.begin(), s.end(), back_inserter(ans), [](char c){ return isalnum(c) || c == ' '; });
    cout << ans << '\n';
}
