#include <iostream>
using namespace std;

/*
Title: Password Validation
Difficulty: Hard
*/

int isSpecialCharacter(char& c){
    return (c == '!' || c == '@' || c == '#' || c == '$' || c == '%' || c == '&' || c == '*');
}

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    string s; cin >> s;
    bool is_minimum_length = true;
    int c_digits = 0, c_special_characters = 0;
    if(s.size() < 7) is_minimum_length = false;
    else{
        for(char& c : s){
            if(isdigit(c)) c_digits++;
            c_special_characters += isSpecialCharacter(c);
        }
    }
    cout << (is_minimum_length && c_digits > 1 && c_special_characters > 1 ? "Strong" : "Weak") << "\n";
}
