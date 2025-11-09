#include <iostream>
using namespace std;

/*
Title: 2D Map
Difficulty: Hard
*/

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    string s; cin >> s;
    int i = 0, j = 0, a = 0, x[2] = {0}, y[2] = {0};
    for(char c : s){
        if(c == 'P') x[a] = j, y[a++] = i;
        else if(c == ',') j = -1, i++;
        j++;
    }
    cout << abs(x[0] - x[1]) + abs(y[0] - y[1]) << "\n";
}
