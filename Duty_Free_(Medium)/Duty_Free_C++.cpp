#include <iostream>
#include <sstream>
using namespace std;

/*
Title: Duty Free
Difficulty: Medium
*/

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    string s, num; getline(cin, s);
    int ans = 1;
    istringstream ss(s);
    while(ss >> num){
        double d = stod(num) * 1.1;
        if(d > 20.0) ans = 0;
    }
    cout << (ans ? "On to the terminal" : "Back to the store") << "\n";
}
