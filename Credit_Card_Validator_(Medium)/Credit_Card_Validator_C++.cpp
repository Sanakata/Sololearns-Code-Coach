#include <iostream>
using namespace std;

/*
Title: Credit Card Validator
Difficulty: Medium
*/

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    string s; cin >> s;
    int sum = 0;
    if(s.size() != 16) cout << "not valid\n";
    else{
        for(int i = 0; i < 16; i++){
            int d = (s[i] - '0') * (i % 2 == 0 ? 2 : 1);
            if(d > 9) d -= 9;
            sum += d;
        }
        cout << (sum % 10 ? "not " : "") << "valid\n";
    }
}
