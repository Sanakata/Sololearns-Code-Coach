#include <iostream>
#include <sstream>
using namespace std;

/*
Title: Even Numbers
Difficulty: Medium
*/

int main() {
    string ans = "", num, pr; getline(cin, pr);
    stringstream ss(pr);
    int c = 0;
    while(ss >> num) if(stoi(num) % 2 == 0) ans += (c > 0 ? " " : ""), ans += num, c++;
    cout << ans << "\n";
}
