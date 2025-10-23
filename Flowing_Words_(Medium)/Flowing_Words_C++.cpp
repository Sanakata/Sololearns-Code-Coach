#include <iostream>
#include <sstream>
using namespace std;

/*
Title: Flowing Words
Difficulty: Medium
*/

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    string s, word; getline(cin, s);
    char pfw = s[0];
    int ans = 1;
    istringstream ss(s);
    while(ss >> word){
        if(pfw != word[0]) ans = 0;
        pfw = word[word.size() - 1];
    }
    cout << (ans ? "true" : "false") << "\n";
}
