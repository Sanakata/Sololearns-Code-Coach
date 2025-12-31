#include <iostream>
#include <vector>
using namespace std;

/*
Title: Hex Color Code Generator
Difficulty: Medium
*/

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    vector<char> ch = {'0', '1', '2', '3', '4', '5', '6', '7', '8', '9', 'a', 'b', 'c', 'd', 'e', 'f'};
    vector<string> hex;
    for(int i = 0; i < 16; i++){
        for(int j = 0; j < 16; j++){
            string c;
            c += ch[i];
            c += ch[j];
            hex.push_back(c);
        }
    }
    int r, g, b; cin >> r >> g >> b;
    cout << '#' << hex[r] << hex[g] << hex[b] << "\n";
}
