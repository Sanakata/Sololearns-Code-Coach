#include <iostream>
#include <sstream>
#include <string>
#include <limits>
using namespace std;

/*
Title: Initials
Difficulty: Medium
*/

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int t; cin >> t;
    cin.ignore(numeric_limits<streamsize>::max(), '\n');
    while(t--){
        string s, n; getline(cin, s);
        stringstream ss(s);
        while(ss >> n) cout << n[0];
        cout << " ";
    }
}
