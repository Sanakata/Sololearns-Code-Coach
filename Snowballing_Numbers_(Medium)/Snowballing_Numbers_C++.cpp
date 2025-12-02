#include <iostream>
using namespace std;

/*
Title: Snowballing Numbers
Difficulty: Medium
*/

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    bool ans = true;
    long long n, cSum = 0; cin >> n;
    for(int i = 0; i < n; i++){
        int a; cin >> a;
        if(cSum >= a) ans = false;
        cSum += a;
    }
    cout << (ans ? "true" : "false") << "\n";
}
