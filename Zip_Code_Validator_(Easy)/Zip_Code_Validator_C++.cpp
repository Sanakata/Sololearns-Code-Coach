#include <bits/stdc++.>
using namespace std;

/*
Title: Zip Code Validator
Difficulty: Easy
*/ 

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    bool ans = true;
    string s; getline(cin, s);
    if(s.size() != 5) ans = false;
    else for(int i = 0; i < s.size(); i++) if(!isdigit(s[i])) ans = false;
    cout << (ans ? "true" : "false") << "\n";
}
