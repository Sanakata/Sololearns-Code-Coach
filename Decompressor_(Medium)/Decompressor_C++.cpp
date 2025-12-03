#include <iostream>
using namespace std;

/*
Title: Text Decompressor
Difficulty: Medium
*/

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    string s; cin >> s;
    for(int i = 0; i < s.size(); i+=2){
        for(int j = 0; j < (s[i + 1] - '0'); j++) cout << s[i];
    }
}
