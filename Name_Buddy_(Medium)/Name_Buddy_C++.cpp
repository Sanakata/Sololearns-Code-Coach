#include <iostream>
#include <string>
#include <sstream>
using namespace std;

/*
Title: Name Buddy
Difficulty: Medium
*/

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int a[26] = {0};
    string names, name, y_name; getline(cin, names);
    stringstream ss(names);
    while(ss >> name) ++a[name[0] - 'A'];
    cin >> y_name;
    cout << (a[y_name[0] - 'A'] ? "Compare notes" : "No such luck") << "\n";
}
