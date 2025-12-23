#include <iostream>
#include <vector>
using namespace std;

/*
Title: Secret Message
Difficulty: Medium
*/

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    string s; getline(cin, s);
    vector<char> alphabets(26, 'z');
    for(int i = 0; i < 26; i++) alphabets[i] -= i;
    for(int i = 0; i < s.size(); i++) cout << (s[i] == ' ' ? ' ' : alphabets[tolower(s[i]) - 'a']);
}
