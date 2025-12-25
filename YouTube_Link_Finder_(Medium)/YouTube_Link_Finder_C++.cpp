#include <iostream>
using namespace std;

/*
Title: YouTube Link Finder
Difficulty: Medium
*/

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    string s; cin >> s;
    if(s.substr(0, 17) == "https://youtu.be/") cout << s.substr(17);
    else cout << s.substr(32);
}
