#include <iostream>
#include <cctype>
#include <algorithm>
using namespace std;

/*
Title: The Spy Life
Difficulty: Medium
*/

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    string s, dec; getline(cin, s);
    for(char c : s){
        if(c == ' ' || isalpha(c)) dec += c;
    }
    reverse(dec.begin(), dec.end());
    cout << dec << "\n";
}
