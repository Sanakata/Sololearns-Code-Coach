#include <iostream>
using namespace std;

/*
Title: It's a Sign
Difficulty: Hard
*/

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int ans = 0;
    for(int i = 0; i < 4; i++){
        string s; cin >> s;
        int n = s.size();
        for(int i = 0; i < n / 2; i++) if(s[i] == s[n - i - 1]) ans = 1;
    }
    cout << (ans ? "Open" : "Trash") << "\n";
}
