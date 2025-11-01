#include <iostream>
using namespace std;

/*
Title: Security
Difficulty: Hard
*/

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    string s; cin >> s;
    bool is_safe = true;
    size_t index = s.find('T');
    for(int i = index - 1; i >= 0; i--){
        if(s[i] != 'x'){
            if(s[i] == '$') is_safe = false;
            break;
        }
    }
    for(int i = index + 1; i < s.size(); i++){
        if(s[i] != 'x'){
            if(s[i] == '$') is_safe = false;
            break;
        }
    }
    cout << (is_safe ? "quiet" : "ALARM") << "\n";
}
