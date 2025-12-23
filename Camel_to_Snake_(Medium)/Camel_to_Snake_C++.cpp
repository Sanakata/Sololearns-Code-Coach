#include <iostream>
using namespace std;

/*
Title: Camel to Snake
Difficulty: Medium
*/

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    string s, ans = ""; cin >> s;
    for(const auto& c : s){
        if(ans != "" && isupper(c)) ans += '_';
        ans += tolower(c);
    }
    cout << ans << "\n";
}
