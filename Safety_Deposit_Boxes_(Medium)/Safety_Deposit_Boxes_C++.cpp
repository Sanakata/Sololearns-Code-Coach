#include <iostream>
#include <sstream>
using namespace std;

/*
Title: Safety Deposit Boxes
Difficulty: Medium
*/

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    string items, item, target;
    int ans = 0;
    getline(cin, items);
    getline(cin, target);
    istringstream ss(items);
    while(getline(ss, item, ',')){
        ans += 5;
        if(item == target) break;
    }
    cout << ans << "\n";
}
