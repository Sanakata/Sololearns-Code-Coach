#include <iostream>
using namespace std;

/*
Title: That's Odd...
Difficulty: Medium
*/

int main(){
    ios::sync_with_stdio(false); cin.tie(NULL);
    int ans = 0, n; cin >> n;
    while(n--){
        int a; cin >> a;
        if(a % 2 == 0) ans += a;
    }
    cout << ans << "\n";
}
