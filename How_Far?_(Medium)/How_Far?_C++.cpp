#include <iostream>
using namespace std;

/*
Title: How Far?
Difficulty: Medium
*/

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    string s, ans; getline(cin, s);
    int h, p;
    for(int i = 0; i < s.size(); i++){
        if(s[i] == 'H') h = i;
        else if(s[i] == 'P') p = i;
    }
    cout << abs(h - p) - 1 << "\n";
}
